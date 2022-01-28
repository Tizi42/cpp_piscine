#include "tools.hpp"
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

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
			myPhonebook.add();
		else if (command.compare(0, 6, "SEARCH") == 0)
			myPhonebook.search();
		std::cout << "How can I help you? (ADD/SEARCH/EXIT)" << std::endl;
		std::getline(std::cin, command);
	}
	std::cout << "See you next time!" << std::endl;
	std::cout << "============ PhoneBook closed ==============" << std::endl;

	return 0;
}
