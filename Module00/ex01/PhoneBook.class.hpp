#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook
{
public:
	Contact		contacts[8];
	static int	nbContacts;

	PhoneBook(void);
	~PhoneBook(void);
};

#endif
