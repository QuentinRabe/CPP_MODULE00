/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:13:44 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/20 13:44:56 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include "Type.hpp"

class	Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		bool		hasValue;
		short		id;

		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds, bool hv, short i);
		Contact(void);
		~Contact(void);
		void		greeting(void) const;
		static void		formatPrint(std::string str, bool isLast);
	private:
		bool	_getHasValue(void) const;
};
#endif
