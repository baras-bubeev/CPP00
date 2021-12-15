#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "libs.h"

class Contact{

private:

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNumber;
	std::string m_darkestSecret;

public:

	Contact();
	~Contact();

	void	setFirstName(std::string fName);
	void	setLastName(std::string lName);
	void	setNickname(std::string nName);
	void	setPhoneNumber(std::string phNumber);
	void	setDarkestSecret(std::string dSecret);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();

	void	print_line();
	void	print_data();

};

#endif