#include "Contact.class.hpp"

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

class	PhoneBook
{
	private:

		Contact	_contact_list[8];
		Contact	_tmp_contact[1];
		int		_index;

	public:

		PhoneBook();
		~PhoneBook();

		void	add_contact(void);
		void	validate_new_contact(void);
		void	seach_contact(void) const;

};

#endif
