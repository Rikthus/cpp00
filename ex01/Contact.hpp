#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact
{
	private:
		Contact(void);
		~Contact(void);

		char	*phone_number;
		char	*darkest_secret;
	public:
		char	*first_name;
		char	*last_name;
		char	*nickname;
};

#endif
