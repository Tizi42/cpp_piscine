#include "Contact.class.hpp"

Contact::Contact(std::string fn, std::string ln, std::string nn,
	std::string num, std::string sec) : firstname(fn), lastname(ln),
	nickname(nn), number(num), secret(sec)
{
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}
