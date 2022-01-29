#include "Contact.class.hpp"

void Contact::display(void) const
{
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "first name:     " << this->_firstname << std::endl;
	std::cout << "last name:      " << this->_lastname << std::endl;
	std::cout << "nickname:       " << this->_nickname << std::endl;
	std::cout << "phone number:   " << this->_number << std::endl;
	std::cout << "darkest secret: " << this->_secret << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

std::string	Contact::getFirstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::getLastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

void Contact::set(std::string fn, std::string ln, std::string nn,
	std::string num, std::string sec)
{
	this->_firstname = fn;
	this->_lastname = ln;
	this->_nickname = nn;
	this->_number = num;
	this->_secret = sec;
}

Contact::Contact(void)
{
	return ;
}

Contact::Contact(std::string fn, std::string ln, std::string nn,
	std::string num, std::string sec) : _firstname(fn), _lastname(ln),
	_nickname(nn), _number(num), _secret(sec)
{
	return ;
}
