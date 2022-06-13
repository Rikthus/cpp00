#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook()	:	_index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact(void)
{
	if (this->_index == 8)
		this->_index = 0;
	this->_tmp_contact->set_info();
	if (this->_tmp_contact->valid_info())
	{
		this->_contact_list[this->_index].set_first_name(this->_tmp_contact->get_first_name());
		this->_contact_list[this->_index].set_last_name(this->_tmp_contact->get_last_name());
		this->_contact_list[this->_index].set_nickname(this->_tmp_contact->get_nickname());
		this->_contact_list[this->_index].set_phone_number(this->_tmp_contact->get_phone_number());
		this->_contact_list[this->_index].set_darkest_secret(this->_tmp_contact->get_darkest_secret());
		this->_index++;
	}
	else
	{
		this->_tmp_contact->set_first_name("\0");
		this->_tmp_contact->set_last_name("\0");
		this->_tmp_contact->set_nickname("\0");
		this->_tmp_contact->set_phone_number("\0");
		this->_tmp_contact->set_darkest_secret("\0");
	}
}

void	PhoneBook::search_contact(void)	const
{
	int	search_index = 0;

	while (search_index < 8)
	{
	std::cout << search_index;
	std::cout << setw(9) << "|";
	std::cout << setw(10) << "|";
	std::cout << setw(10) << "|";
	search_index++;
	}
}
