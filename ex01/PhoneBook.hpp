/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:17:38 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 11:51:01 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include "Type.hpp"

class	PhoneBook {
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	askForInputs( t_opt opt, std::string msg );
		short	getId( void ) const;
		void	search( void ) const;
		static void		formatPrint(std::string str, bool isLast);
	private:
		Contact	_arr[8];
		short	_id;

		void	_add( t_opt opt, std::string str );
		int		_printGivenContactId( std::string id, short retry ) const;
};
#endif
