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

		void		set_info(void);
		bool		valid_info(void)		const;

		std::string	get_first_name(void)		const;
		std::string	get_last_name(void)			const;
		std::string	get_nickname(void)			const;
		std::string	get_phone_number(void)		const;
		std::string	get_darkest_secret(void)	const;

		void		set_first_name(std::string arg);
		void		set_last_name(std::string arg);
		void		set_nickname(std::string arg);
		void		set_phone_number(std::string arg);
		void		set_darkest_secret(std::string arg);
};

#endif
