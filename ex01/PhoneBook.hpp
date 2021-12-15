#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

private:

	Contact	contact[8];
	short	index;
	bool	isFull;

public:

	PhoneBook();
	~PhoneBook();

	void		add_contact();
	void		show(short contactNumber);
	void		search();
	std::string	get_data(std::string msg);

};

#endif