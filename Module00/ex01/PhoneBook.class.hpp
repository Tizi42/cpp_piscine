#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
# include "Contact.class.hpp"

class PhoneBook
{
public:
	Contact		contacts[8];
	int			nbContacts;

	PhoneBook(void);
	//~PhoneBook(void);
};

#endif
