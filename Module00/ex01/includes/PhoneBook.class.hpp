#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
#include <iomanip>
# include "tools.hpp"
# include "Contact.class.hpp"

class PhoneBook {

public:
	void open(void);
	void display(void) const;

	PhoneBook(void);

private:
	Contact		_contacts[8];
	int			_nbContacts;
	int			_oldestIndex;

	void _add(void);
	void _search(void);

};

#endif
