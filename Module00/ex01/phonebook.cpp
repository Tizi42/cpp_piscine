#include "phonebook.hpp"

void display_one_contact(Contact contact)
{
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "first name:     " << contact.firstname << std::endl;
	std::cout << "last name:      " << contact.lastname << std::endl;
	std::cout << "nickname:       " << contact.nickname << std::endl;
	std::cout << "phone number:   " << contact.number << std::endl;
	std::cout << "darkest secret: " << contact.secret << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

std::string	fit_column(std::string str)
{
	std::string	ns;
	int			i;

	i = 0;
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	while (i + str.size() < 10)
	{
		ns += " ";
		i++;
	}
	ns += str;
	return (ns);
}

void display_contacts(PhoneBook myPhonebook)
{
	int			index;
	std::string	line;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	index = 1;
	while (index <= myPhonebook.nbContacts)
	{
		line = "|";
		line += fit_column(myPhonebook.contacts[index - 1].firstname);
		line += "|";
		line += fit_column(myPhonebook.contacts[index - 1].lastname);
		line += "|";
		line += fit_column(myPhonebook.contacts[index - 1].nickname);
		line += "|";
		std::cout << "|         " << (char)(index + '0')<< line << std::endl;
		index++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

int	get_one_digit(void)
{
	std::string	input;

	getline(std::cin, input);
	while (input.size() != 1 || input[0] < '0' || input[0] > '9')
	{
		std::cout << "ERROR: please enter a single digit" << std::endl;
		getline(std::cin, input);
	}
	return (input[0] - '0');
}

void search(PhoneBook myPhonebook)
{
	int	index;

	index = 0;
	display_contacts(myPhonebook);
	std::cout << "Please enter the index of entry to display: " << std::endl;
	index = get_one_digit();
	while (index <= 0 || index > myPhonebook.nbContacts)
	{
		std::cout << "ERROR: please enter a valid index" << std::endl;
		index = get_one_digit();
	}
	display_one_contact(myPhonebook.contacts[index - 1]);
	return ;
}

void add_one_info(std::string info_required, std::string *buffer)
{
	*buffer = "";
	while (buffer->empty())
	{
		std::cout << "Please enter the " << info_required << ":" << std::endl;
		std::getline(std::cin, *buffer);
	}
	return ;
}

void add(PhoneBook *myPhonebook)
{
	int	i;

	i = 0;
	while (i < 8 && !myPhonebook->contacts[i].firstname.empty())
		i++;
	if (i == 8)
	{
		std::cout << "(Your PhoneBook is full, the oldest contact "
						"will be erased for the new one...)" << std::endl;
		myPhonebook->nbContacts--;
		i = 0;
	}
	add_one_info("first name", &myPhonebook->contacts[i].firstname);
	add_one_info("last name", &myPhonebook->contacts[i].lastname);
	add_one_info("nickname", &myPhonebook->contacts[i].nickname);
	add_one_info("phone number", &myPhonebook->contacts[i].number);
	add_one_info("darkest secret", &myPhonebook->contacts[i].secret);
	myPhonebook->nbContacts++;
	return ;
}

int main(void)
{
	PhoneBook	myPhonebook;
	std::string	command;

	std::cout << "==== Welcome to your awesome PhoneBook! ====" << std::endl;
	std::cout << "How can I help you? (ADD/SEARCH/EXIT)" << std::endl;
	std::getline(std::cin, command);
	while (command.compare(0, 4, "EXIT") != 0)
	{
		if (command.compare(0, 3, "ADD") == 0)
			add(&myPhonebook);
		else if (command.compare(0, 6, "SEARCH") == 0)
			search(myPhonebook);
		std::cout << "How can I help you? (ADD/SEARCH/EXIT)" << std::endl;
		std::getline(std::cin, command);
	}
	std::cout << "See you next time!" << std::endl;
	std::cout << "============ PhoneBook closed ==============" << std::endl;

	return 0;
}
