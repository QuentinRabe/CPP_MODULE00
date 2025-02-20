/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:26:48 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/20 14:24:37 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook(void): _id(0) {}

void	PhoneBook::_add(t_opt opt, std::string str)
{
	if (this->_id >= 8)
		this->_id = 0;
	switch (opt)
	{
		case FIRSTNAME :
			this->_arr[this->_id].firstName = str;
			break;
		case LASTNAME :
			this->_arr[this->_id].lastName = str;
			break;
		case NICKNAME :
			this->_arr[this->_id].nickname = str;
			break;
		case PHONENUMBER :
			this->_arr[this->_id].phoneNumber = str;
			break;
		case DARKESTSECRET :
			this->_arr[this->_id].darkestSecret = str;
			this->_arr[this->_id].hasValue = true;
			this->_id += 1;
			break;
		default:
			break;
	}
}

void	PhoneBook::askForInputs(t_opt opt, std::string msg)
{
	std::string	input = "";

	std::cout << msg << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	while (input.empty())
	{
		std::cout << "Please, retry with not empty value." << std::endl;
		std::cout << msg << " ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	_add(opt, input);
}

short	PhoneBook::getId(void) const
{
	return (this->_id);
}

void	PhoneBook::search(void) const
{
	short	id = 0;

	Contact::formatPrint("Index", false);
	Contact::formatPrint("First name", false);
	Contact::formatPrint("Last name", false);
	Contact::formatPrint("Nick name", true);
	if (!this->_arr[id].hasValue)
	{
		std::cout << "No contact yet!" << std::endl;
		return ;
	}
	while (this->_arr[id].hasValue)
	{
		Contact::formatPrint(std::to_string(id), false);
		Contact::formatPrint(this->_arr[id].firstName, false);
		Contact::formatPrint(this->_arr[id].lastName, false);
		Contact::formatPrint(this->_arr[id].nickname, true);
		id++;
	}
}
