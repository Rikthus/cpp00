#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact() : _first_name("NA"), _last_name("NA"), _nickname("NA"), _phone_number("NA"), _darkest_secret("NA")
{
}

Contact::~Contact()
{
}

void	Contact::set_info(void)
{
	std::cout << "Enter first name:    ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Enter last name:    ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Enter nickname:    ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Enter phone number:    ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "Enter darkest secret:    ";
	std::getline(std::cin, this->_darkest_secret);
}

bool	Contact::valid_info(void)	const
{
	if (this->_first_name.empty())
		return (false);
	if (this->_last_name.empty())
		return (false);
	if (this->_nickname.empty())
		return (false);
	if (this->_phone_number.empty())
		return (false);
	if (this->_darkest_secret.empty())
		return (false);
	return (true);
}

///////////////////////////
//////////GETTERS//////////
///////////////////////////

std::string	Contact::get_first_name(void)	const
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)	const
{
	return (this->_last_name);
}

std::string Contact::get_nickname(void)	const
{
	return (this->_nickname);
}

std::string Contact::get_phone_number(void)	const
{
	return (this->_phone_number);
}

std::string Contact::get_darkest_secret(void)	const
{
	return (this->_darkest_secret);
}

///////////////////////////
//////////SETTERS//////////
///////////////////////////

void	Contact::set_first_name(std::string arg)
{
	this->_first_name = arg;
}

void	Contact::set_last_name(std::string arg)
{
	this->_last_name = arg;
}

void	Contact::set_nickname(std::string arg)
{
	this->_nickname = arg;
}

void	Contact::set_phone_number(std::string arg)
{
	this->_phone_number = arg;
}

void	Contact::set_darkest_secret(std::string arg)
{
	this->_darkest_secret = arg;
}
