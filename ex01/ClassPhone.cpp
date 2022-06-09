#include <iostream>
#include "ClassPhone.hpp"

Phone::Phone(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Phone::~Phone (void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
