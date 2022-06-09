#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	PhoneBook
{
	private:
		PhoneBook(void);
		~PhoneBook(void);
	public:
		Contact	contacts;
};

#endif
