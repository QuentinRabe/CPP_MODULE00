/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:13:44 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/12 11:48:49 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include "Type.hpp"

class	Contact {
	public:
		Contact( std::string fn, std::string ln, std::string nn, std::string pn, std::string ds, std::string i, bool hv );
		Contact( void );
		~Contact( void );
		std::string	getStringAttribut( t_opt option ) const;
		bool		getHasValue( void ) const;
		void		setStringAttribut( t_opt option, std::string& value );
		void		setHasValue( bool value );
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		std::string	_id;
		bool		_hasValue;

};
#endif
