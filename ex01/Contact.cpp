
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
	std::cout << "Hello world" << std::endl;
}

void	Contact::formatPrint(std::string str, bool isLast)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::left << str;
	if (!isLast)
		std::cout << "|";
	else
	 	std::cout << std::endl;
}


bool	Contact::_getHasValue(void) const
{
	return this->hasValue;
}
