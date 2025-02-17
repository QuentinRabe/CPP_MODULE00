/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:17:38 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 09:58:03 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class	PhoneBook
{
	public:
		PhoneBook(void);
		void	add(std::string p1, std::string p2, std::string p3, std::string p4, std::string p5);
		void	printContacts(void);
	private:
		Contact	_arr[8];
		short	_id;
};
#endif
