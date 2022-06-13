#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

PhoneBook::PhoneBook()	:	_index(0)
{
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::validate_new_contact(void)
{
	if (this->_tmp_contact.valid_info())
}

void	PhoneBook::add_contact(void)
{
	if (this->_index == 8)
		this->_index == 0;

}
