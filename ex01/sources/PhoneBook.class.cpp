#include <iostream>
#include <iomanip>
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
	this->_tmp_contact->set_first_name("\0");
	this->_tmp_contact->set_last_name("\0");
	this->_tmp_contact->set_nickname("\0");
	this->_tmp_contact->set_phone_number("\0");
	this->_tmp_contact->set_darkest_secret("\0");
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
}

void	PhoneBook::search_contact(void)	const
{
	int	search_index = 0;

	while (search_index < 8)
	{
		std::cout << std::setw(10) << search_index << "|";
		if (this->_contact_list[search_index].get_first_name().length() > 10)
			std::cout << this->_contact_list[search_index].get_first_name().substr(0, 9) << "."
					  << "|";
		else
			std::cout << std::setw(11 - this->_contact_list[search_index].get_first_name().length()) << this->_contact_list[search_index].get_first_name() << "|";
		if (this->_contact_list[search_index].get_last_name().length() > 10)
			std::cout << this->_contact_list[search_index].get_last_name().substr(0, 9) << "."
					  << "|";
		else
			std::cout << std::setw(11 - this->_contact_list[search_index].get_last_name().length()) << this->_contact_list[search_index].get_last_name() << "|";
		if (this->_contact_list[search_index].get_nickname().length() > 10)
			std::cout << this->_contact_list[search_index].get_nickname().substr(0, 9) << ".";
		else
			std::cout << std::setw(11 - this->_contact_list[search_index].get_nickname().length()) << this->_contact_list[search_index].get_nickname();
		std::cout << std::endl;
		search_index++;
	}
	this->print_contact_info();
}

void	PhoneBook::print_contact_info(void)	const
{
	std::string	contact_number = "\0";
	int			contact_number_decimal = 0;
	bool		quit_search = 0;

	while (!quit_search)
	{
		std::cout << "Please enter a contact number or 'STOP' to go back:" << std::endl;
		std::getline(std::cin, contact_number);
		if (contact_number == "STOP")
			break ;
		else if (contact_number.length() == 1 && contact_number[0] >= '0' && contact_number[0] < '8')
		{
			contact_number_decimal = contact_number[0] - 48;
			std::cout << std::endl;
			std::cout << "First name      :" << this->_contact_list[contact_number_decimal].get_first_name() << std::endl;
			std::cout << "Last name       :" << this->_contact_list[contact_number_decimal].get_last_name() << std::endl;
			std::cout << "Nickname        :" << this->_contact_list[contact_number_decimal].get_nickname() << std::endl;
			std::cout << "Phone number    :" << this->_contact_list[contact_number_decimal].get_phone_number() << std::endl;
			std::cout << "Darkest secret  :" << this->_contact_list[contact_number_decimal].get_darkest_secret() << std::endl;
			std::cout << std::endl;
		}
		else
			std::cout << "VALID NUMBERS: 0 - 7" << std::endl << std::endl;
	}
}
