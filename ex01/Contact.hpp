/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:13:44 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/17 10:26:05 by arabefam         ###   ########.fr       */
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
		Contact(std::string p1, std::string p2, std::string p3, std::string p4, std::string p5, bool p6, short p7);
		Contact(void);
		~Contact(void);
		void		greeting(void) const;
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		bool		hasValue;
		short		id;
	private:
		void	_formatPrint(t_opt option, bool isLast) const;
		bool	_getHasValue(void) const;
};
#endif
