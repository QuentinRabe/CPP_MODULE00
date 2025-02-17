/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:20:43 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 09:25:21 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string p1, std::string p2, std::string p3, std::string p4, std::string p5, bool p6) :
_firstName(p1), _lastName(p2), _nickname(p3), _phoneNumber(p4) ,_darkestSecret(p5), _hasValue(p6){}

Contact::Contact(void):
_firstName(""), _lastName(""), _nickname(""), _phoneNumber("") ,_darkestSecret(""), _hasValue(false){}

Contact::~Contact(void)
{
	std::cout << "Constructor called" << std::endl;
}

void	Contact::greeting(void) const
{
	_formatPrint(FIRSTNAME, false);
	_formatPrint(LASTNAME, false);
	_formatPrint(NICKNAME, false);
	_formatPrint(PHONENUMBER, true);
}

void	Contact::_formatPrint(t_opt option, bool isLast) const
{
	std::string	strValue = "";

	switch (option) {
		case FIRSTNAME :
			strValue = this->_firstName;
			break;
		case LASTNAME :
			strValue = this->_lastName;
			break;
		case NICKNAME :
			strValue = this->_nickname;
			break;
		case PHONENUMBER :
			strValue = this->_phoneNumber;
			break;
		case DARKESTSECRET :
			strValue = this->_darkestSecret;
			break;
		default:
			break;
	}
	if (strValue.length() > 10)
		std::cout << strValue.substr(0, 9) << ".";
	else
		std::cout << strValue << std::setw(11 - strValue.length());
	if (!isLast)
		std::cout << "|";
	else
	 	std::cout << std::endl;
}


bool	Contact::_getHasValue(void) const
{
	return this->_hasValue;
}
