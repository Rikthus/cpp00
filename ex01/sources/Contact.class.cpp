#include <iostream>
#include <string>
#include "Contact.class.hpp"

Contact::Contact() : _first_name("NA"), _last_name("NA"), _nickname("NA"), _phone_number("NA"), _darkest_secret("NA")
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
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
