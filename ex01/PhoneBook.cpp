/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:26:48 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 10:27:28 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook(void): _id(0) {}

void	PhoneBook::add(std::string p1, std::string p2, std::string p3, std::string p4, std::string p5)
{
	if (this->_id == 8)
		this->_id = 0;
	this->_arr[this->_id].firstName = p1;
	this->_arr[this->_id].lastName = p2;
	this->_arr[this->_id].nickname = p3;
	this->_arr[this->_id].phoneNumber = p4;
	this->_arr[this->_id].darkestSecret = p5;
	this->_arr[this->_id].id = this->_id;
	this->_arr[this->_id].hasValue = true;
	this->_id += 1;
}

void	PhoneBook::printContacts(void)
{
	int	i = 0;

	while (i < 8 && this->_arr[i].hasValue)
	{
		std::cout << _arr[i].firstName << std::endl;
		i++;
	}
}
