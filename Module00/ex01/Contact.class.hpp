#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact
{
public:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	number;
	std::string	secret;

	Contact(std::string fna, std::string ln, std::string nn,
			std::string num, std::string sec);
	~Contact(void);
};

#endif
