#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nbContacts = 0;
	this->_oldestIndex = 1;
}

void PhoneBook::search(void)
{
	int	index;

	index = 0;
	this->display();
	std::cout << "Please enter the index of entry to display: " << std::endl;
	index = get_one_digit();
	while (index <= 0 || index > this->_nbContacts)
	{
		std::cout << "ERROR: please enter a valid index" << std::endl;
		index = get_one_digit();
	}
	this->_contacts[index - 1].display();
	return ;
}

void PhoneBook::add(void)
{
	int			i;
	std::string fn, ln, nn, num, sec;

	i = 0;
	while (i < 8 && !this->_contacts[i].getFirstname().empty())
		i++;
	if (i == 8)
	{
		std::cout << "(Your PhoneBook is full, the oldest contact "
						"will be erased for the new one...)" << std::endl;
		this->_nbContacts--;
		i = this->_oldestIndex - 1;
		this->_oldestIndex += 1;
		if (this->_oldestIndex > 8)
			this->_oldestIndex = 1;
	}
	get_one_info("first name", &fn);
	get_one_info("last name", &ln);
	get_one_info("nickname", &nn);
	get_one_info("phone number", &num);
	get_one_info("darkest secret", &sec);
	this->_contacts[i].set(fn, ln, nn, num, sec);
	this->_nbContacts++;
	return ;
}

void PhoneBook::display(void) const
{
	int			index;
	std::string	line;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	index = 1;
	while (index <= this->_nbContacts)
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|" << std::setfill(' ') << std::setw(10);
		std::cout << (char)(index + '0');
		std::cout  << "|" << std::setfill(' ') << std::setw(10);
		std::cout << fit_column(this->_contacts[index - 1].getFirstname());
		std::cout  << "|" << std::setfill(' ') << std::setw(10);
		std::cout << fit_column(this->_contacts[index - 1].getLastname());
		std::cout  << "|" << std::setfill(' ') << std::setw(10);
		std::cout << fit_column(this->_contacts[index - 1].getNickname());
		std::cout << "|" << std::endl;
		index++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}
