#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
#include <iomanip>
# include "tools.hpp"
# include "Contact.class.hpp"

class PhoneBook
{
public:
	void display(void) const;
	void add(void);
	void search(void);

	PhoneBook(void);

private:
	Contact		_contacts[8];
	int			_nbContacts;
	int			_oldestIndex;
};

#endif
