/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:20:43 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 10:47:31 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds, bool hv, short i) :
firstName(fn), lastName(ln), nickname(nn), phoneNumber(pn), darkestSecret(ds), hasValue(hv), id(i){}

Contact::Contact(void):
firstName(""), lastName(""), nickname(""), phoneNumber("") , darkestSecret(""), hasValue(false){}

Contact::~Contact(void)  {}

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
			strValue = this->firstName;
			break;
		case LASTNAME :
			strValue = this->lastName;
			break;
		case NICKNAME :
			strValue = this->nickname;
			break;
		case PHONENUMBER :
			strValue = this->phoneNumber;
			break;
		case DARKESTSECRET :
			strValue = this->darkestSecret;
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
	return this->hasValue;
}
