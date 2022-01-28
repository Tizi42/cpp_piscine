#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <string>
# include "tools.hpp"

class Contact
{
public:
	void		display(void) const;
	void		set(std::string fn, std::string ln, std::string nn,
					std::string num, std::string sec);
	std::string getFirstname(void) const;
	std::string getLastname(void) const;
	std::string getNickname(void) const;

	Contact(void);
	Contact(std::string fn, std::string ln, std::string nn,
			std::string num, std::string sec);

private:
	std::string	_firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_number;
	std::string	_secret;
};

#endif
