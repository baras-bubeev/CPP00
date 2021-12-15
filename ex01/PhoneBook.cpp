#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
	isFull = false;
}

PhoneBook::~PhoneBook()
{}

std::string	PhoneBook::get_data(std::string msg)
{
	std::string	input;

	input = "";
	while (input.length() == 0)
	{
		std::cout << msg;
		std::getline(std::cin, input);
		if (input.length() == 0)
			std::cout << "Please enter ";
	}
	return (input);
}

void    PhoneBook::add_contact()
{
	contact[index].setFirstName(PhoneBook::get_data("First name: "));
	contact[index].setLastName(PhoneBook::get_data("Last name: "));
	contact[index].setNickname(PhoneBook::get_data("Nickname: "));
	contact[index].setPhoneNumber(PhoneBook::get_data("Phone number: "));
	contact[index].setDarkestSecret(PhoneBook::get_data("Darkest secret: "));
	if (index == 7)
	{
		isFull = true;
		index = 0;
	}
	else
		index++;
	}

void	PhoneBook::show(short contactNumber)
{
	short	i;

	i = 0;
	std::cout << "\n---------------------------------------------\n";
	std::cout << '|' << std::setw(10) << "Index" << '|' 
		<< std::setw(10) << "First name" << '|' 
		<< std::setw(10) << "Last name" << '|'
		<< std::setw(10) << "Nickname" << '|'
		<< std::endl;
	std::cout << "---------------------------------------------\n";
	while (i < contactNumber)
	{
		std::cout << '|' << std::setw(10) << i + 1;
		contact[i].print_line();
		std::cout << std::endl;
		i++;
	}
	if (i > 0)
		std::cout << "---------------------------------------------\n";
}

void	PhoneBook::search()
{
	short	input;
	short	contactNumber;

	if (isFull)
		contactNumber = 8;
	else
		contactNumber = index;
	if (contactNumber == 0)
		std::cout << "\nYour PhoneBook is empty! Please add contacts.\n" << std::endl;
	else
	{
		PhoneBook::show(contactNumber);
		input = 0;
		while (input < 1 || input > contactNumber)
		{
			std::cout << "\nEnter contact index: ";
			std::cin >> input;
			if (std::cin.fail())
				std::cin.clear();
			std::cin.ignore(32767, '\n');
			if (input < 1 || input > contactNumber)
				std::cout << "Please enter a number from 1 to " << contactNumber << std::endl;
		}
		contact[input - 1].print_data();
	}
}