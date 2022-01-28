#include "phonebook.hpp"

void display_one_contact(Contact contact) const
{
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "first name: " << contact.firstname << std::endl;
	std::cout << "last name: " << contact.lastname << std::endl;
	std::cout << "nickname: " << contact.nickname << std::endl;
	std::cout << "phone number: " << contact.number << std::endl;
	std::cout << "darkest secret: " << contact.secret << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

std::string	fit_column(std::string str) const
{
	std::string	new;
	int			i;

	i = 0;
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	while (i + str.size() < 10)
	{
		new += " ";
		i++;
	}
	new += str;
	return (new);
}

void display_contacts(PhoneBook myPhonebook) const
{
	int			index;
	std::string	line;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	index = 1;
	while (index <= myPhonebook.nbContacts)
	{
		line = "|         " + index + "|";
		line += fit_column(myPhonebook.contacts[i].firstname);
		line += "|";
		line += fit_column(myPhonebook.contacts[i].lastname);
		line += "|";
		line += fit_column(myPhonebook.contacts[i].nickname);
		line += "|";
		std::cout << line << std::endl;
		index++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

void search(PhoneBook myPhonebook) const
{
	int	index;

	index = 0;
	display_contacts(myPhonebook.contacts);
	std::cout << "Please enter the index of entry to display: " << std::endl;
	std::cin >> index;
	while (index <= 0 || index > myPhonebook.nbContacts)
	{
		std::cout << "Please enter a valid index: " << std::endl;
		std::cin >> index;
	}
	display_one_contact(myPhonebook.contacts[index]);
	return ;
}

void add_one_info(std::string info_required, std::string *buffer)
{
	*buffer = "";
	while (*buffer.empty())
	{
		std::cout << "Please enter the " << info_required << ":" << std::endl;
		std::cout << "(empty field will not be accepted)" << std::endl;
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
		std::cout << "(Your PhoneBook is full, the oldest contact ";
						"will be erased for the new one...)" << std::endl;
		myPhonebook->nbContacts--;
		i = 0;
	}
	add_one_info("first name", &my->PhoneBook->contacts[i].firstname);
	add_one_info("last name", &my->PhoneBook->contacts[i].lasttname);
	add_one_info("nickname", &my->PhoneBook->contacts[i].nickname);
	add_one_info("phone number", &my->PhoneBook->contacts[i].number);
	add_one_info("darkest secret", &my->PhoneBook->contacts[i].secret);
	myPhonebook->nbContacts++;
	return ;
}

int main(int ac, char **av)
{
	PhoneBook	myPhonebook;
	std::string	command;

	std::cout << "=== Welcome to your awesome PhoneBook! ===" << std::endl;
	std::cout << "How can I help you? (ADD/SEARCH/EXIT)" << std::endl;
	std::cin >> command;
	while (command.compare("EXIT") != 0)
	{
		if (command.compare("ADD") == 0)
			add(&myPhonebook);
		else if (command.compare("SEARCH") == 0)
			search(myPhonebook);
		std::cout << "How can I help you? (ADD/SEARCH/EXIT)" << std::endl;
		std::cin >> command;
	}
	std::cout << "See you next time!" << std::endl;
	std::cout << "=========== PhoneBook closed =============" << std::endl;

	return 0;
}
