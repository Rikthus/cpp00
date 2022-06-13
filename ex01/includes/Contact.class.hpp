#include <string>

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class	Contact
{
	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:

		Contact();
		~Contact();

		bool	valid_info(void)	const;

};

#endif
