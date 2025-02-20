/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 08:17:38 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/20 13:03:11 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include "Type.hpp"

class	PhoneBook
{
	public:
		PhoneBook(void);
		void	askForInputs(t_opt opt, std::string msg);
		short	getId(void) const;
		void	search(void) const;
	private:
		void	_add(t_opt opt, std::string str);
		Contact	_arr[8];
		short	_id;
};
#endif
