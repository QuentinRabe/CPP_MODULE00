/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:26:48 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/18 21:51:24 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void): _id(0) {}

void	PhoneBook::add(t_opt opt, std::string str)
{
	if (this->_id == 8)
		this->_id = 0;
	switch (opt)
	{
		case FIRSTNAME:
			this->_arr[this->_id].firstName = str;
			break;
		case LASTNAME:
			this->_arr[this->_id].lastName = str;
			break;
		case NICKNAME:
			this->_arr[this->_id].nickname = str;
			break;
		case PHONENUMBER:
			this->_arr[this->_id].phoneNumber = str;
			break;
		case DARKESTSECRET:
			this->_arr[this->_id].darkestSecret = str;
			this->_arr[this->_id].hasValue = true;
			this->_id += 1;
			break;
		default:
			break;
	}
}

short	PhoneBook::getId(void) const
{
	return (this->_id);
}
