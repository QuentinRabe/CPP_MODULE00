/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:26:48 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 11:53:01 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

PhoneBook::PhoneBook( void ): _id(0) {}

PhoneBook::~PhoneBook( void ) {}

void	PhoneBook::formatPrint( std::string str, bool isLast ) {
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::left << str;
	if (!isLast)
		std::cout << "|";
	else
	 	std::cout << std::endl;
}

void	PhoneBook::_add( t_opt opt, std::string str ) {
	if (this->_id >= 8)
		this->_id = 0;
	switch (opt) {
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
			this->_arr[this->_id].id = std::to_string(this->_id);
			this->_arr[this->_id].hasValue = true;
			this->_id += 1;
			break;
		default:
			break;
	}
}

void	PhoneBook::askForInputs( t_opt opt, std::string msg ) {
	std::string	input = "";

	std::cout << msg << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	while (input.empty()) {
		std::cout << "Please, retry with not empty value." << std::endl;
		std::cout << msg << " ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
	}
	_add(opt, input);
}

short	PhoneBook::getId( void ) const {
	return (this->_id);
}

void	PhoneBook::search( void ) const {
	short		id = 0;
	std::string	input = "";
	short		retry = 0;

	if (!this->_arr[id].hasValue) {
		std::cout << "No contact yet!" << std::endl;
		return ;
	}
	PhoneBook::formatPrint("Index", false);
	PhoneBook::formatPrint("First name", false);
	PhoneBook::formatPrint("Last name", false);
	PhoneBook::formatPrint("Nick name", true);
	while (this->_arr[id].hasValue) {
		PhoneBook::formatPrint(this->_arr[id].id, false);
		PhoneBook::formatPrint(this->_arr[id].firstName, false);
		PhoneBook::formatPrint(this->_arr[id].lastName, false);
		PhoneBook::formatPrint(this->_arr[id].nickname, true);
		id++;
	}
	while (retry < 3) {
		std::cout << "Enter an index : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		while (input.empty()) {
			std::cout << "Please, retry with not empty value." << std::endl;
			std::cout << "Enter an index : ";
			std::getline(std::cin, input);
			if (std::cin.eof())
				exit(0);
		}
		if (_printGivenContactId(input, retry)) {
			retry++;
			continue;
		}
		else
			break;
		retry++;
	}
}

int	PhoneBook::_printGivenContactId(std::string id, short retry) const {
	short	i = 0;
	bool	isIdFound = false;

	while (this->_arr[i].hasValue) {
		if (id == std::to_string(i)) {
			isIdFound = true;
			break ;
		}
		i++;
	}
	if (isIdFound == false) {
		if (retry < 2)
			std::cout << "Please try another contact index!" << std::endl;
		else
		 	std::cout << "Sorry, you only allowed to retry 3 times!" << std::endl;
		return (1);
	}
	std::cout << "First name : " << this->_arr[i].firstName << std::endl;
	std::cout << "Last name : " << this->_arr[i].lastName << std::endl;
	std::cout << "Nick name : " << this->_arr[i].nickname << std::endl;
	std::cout << "Phone number : " << this->_arr[i].phoneNumber << std::endl;
	std::cout << "Darkest secret : " << this->_arr[i].darkestSecret << std::endl;
	return (0);
}
