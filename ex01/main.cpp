#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string	input;

	std::cout << "\nWelcome to the Awesome PhoneBook!\n" << std::endl;
	std::cout << "The PhoneBook accepts the following commands:" << std::endl;
	std::cout << "ADD - add contact" << std::endl;
	std::cout << "SEARCH - displaying a list of contacts and selecting the needed contact" << std::endl;
	std::cout << "EXIT - exit from the PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "Please enter the command (uppercase): ";
		getline(std::cin, input);
		if (input.length() == 0)
			continue;
		if (input == "EXIT")
			exit(0);
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "\nError. Command not found\n" << std::endl;
	}
	return 0;
}