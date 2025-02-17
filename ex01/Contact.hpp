/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:13:44 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 10:43:26 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

enum e_opt
{
	FIRSTNAME,
	LASTNAME,
	NICKNAME,
	PHONENUMBER,
	DARKESTSECRET
};

typedef enum e_opt	t_opt;

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
	private:
		void	_formatPrint(t_opt option, bool isLast) const;
		bool	_getHasValue(void) const;
};
#endif
