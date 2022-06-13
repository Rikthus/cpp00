#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

int	main()
{
	PhoneBook	phonebook;
	std::string	user_cmd;

	while (1)
	{
		std::getline(std::cin, user_cmd);
		if (user_cmd == "ADD")
			phonebook.add_contact();
		else if (user_cmd == "SEARCH")
			phonebook.search_contact();
		else if (user_cmd == "EXIT")
			break;
		else
			std::cout << "commands: ADD / SEARCH / EXIT" << std::endl;
	}

	return (0);
}
