#include "Contact.hpp"

Contact::Contact()
{
	setFirstName("");
	setLastName("");
	setNickname("");
	setPhoneNumber("");
	setDarkestSecret("");
}

Contact::~Contact()
{
	setFirstName(NULL);
	setLastName(NULL);
	setNickname(NULL);
	setPhoneNumber(NULL);
	setDarkestSecret(NULL);
}

void	Contact::setFirstName(std::string fName)
{
	m_firstName = fName;
}

void	Contact::setLastName(std::string lName)
{
	m_lastName = lName;
}

void	Contact::setNickname(std::string nName)
{
	m_nickname = nName;
}

void	Contact::setPhoneNumber(std::string phNumber)
{
	m_phoneNumber = phNumber;
}

void	Contact::setDarkestSecret(std::string dSecret)
{
	m_darkestSecret = dSecret;
}

std::string Contact::getFirstName()
{
	return (m_firstName);
}

std::string Contact::getLastName()
{
	return (m_lastName);
}

std::string Contact::getNickname()
{
	return (m_nickname);
}

std::string Contact::getPhoneNumber()
{
	return (m_phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (m_darkestSecret);
}

void	Contact::print_line()
{
	std::cout << '|';
	if (m_firstName.length() > 10)
		std::cout << m_firstName.substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << m_firstName << '|';
	if (m_lastName.length() > 10)
		std::cout << m_lastName.substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << m_lastName << '|';
	if (m_nickname.length() > 10)
		std::cout << m_nickname.substr(0, 9) << '.' << '|';
	else
		std::cout << std::setw(10) << m_nickname << '|';
}

void	Contact::print_data()
{
	std::cout << std::setw(17) << std::left
		<< "First name:" << m_firstName << std::endl;
	std::cout << std::setw(17) << std::left
		<< "Last name:" << m_lastName << std::endl;
	std::cout << std::setw(17) << std::left
		<< "Nickname:" << m_nickname << std::endl;
	std::cout << std::setw(17) << std::left
		<< "Phone number:" << m_phoneNumber << std::endl;
	std::cout << std::setw(17) << std::left
		<< "Darkest secret:" << m_darkestSecret << std::endl;
}