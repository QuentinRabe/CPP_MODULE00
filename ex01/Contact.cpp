
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

Contact::Contact( std::string fn, std::string ln, std::string nn, std::string pn, std::string ds, std::string i, bool hv ) :
_firstName(fn), _lastName(ln), _nickname(nn), _phoneNumber(pn), _darkestSecret(ds), _id(i), _hasValue(hv){}

Contact::Contact( void ):
_firstName(""), _lastName(""), _nickname(""), _phoneNumber("") , _darkestSecret(""), _id(""), _hasValue(false){}

Contact::~Contact( void )  {}

std::string	Contact::getStringAttribut( t_opt option ) const {
	switch (option) {
		case FIRSTNAME:
			return (this->_firstName);
		case LASTNAME:
			return (this->_lastName);
		case NICKNAME:
			return (this->_nickname);
		case PHONENUMBER:
			return (this->_phoneNumber);
		case DARKESTSECRET:
			return (this->_darkestSecret);
		case ID:
			return (this->_id);
	}
}

bool	Contact::getHasValue( void ) const {
	return (this->_hasValue);
}

void	Contact::setStringAttribut( t_opt option, std::string& value ) {
	switch (option) {
		case FIRSTNAME:
			this->_firstName = value;
		case LASTNAME:
			this->_lastName = value;
		case NICKNAME:
			this->_nickname = value;
		case PHONENUMBER:
			this->_phoneNumber = value;
		case DARKESTSECRET:
			this->_darkestSecret = value;
		case ID:
			this->_id = value;
	}
}

void	Contact::setHasValue( bool value ) {
	this->_hasValue = value;
}
