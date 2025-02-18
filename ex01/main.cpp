/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:27:10 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/18 21:53:27 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static std::string	prompt(std::string message)
{
	std::string	result = "";

	std::cout << message << ": ";
	std::cin >> result;
	return (result);
}

static void	askForInputs(PhoneBook phoneBook)
{
	std::string	input;

	while (1)
	{
		std::cout << "Before adding contact, actual is id = " << phoneBook.getId() << std::endl;
		input = prompt("Enter firstname");
		phoneBook.add(FIRSTNAME, input);
		input = prompt("Enter lastname");
		phoneBook.add(LASTNAME, input);
		input = prompt("Enter nickname");
		phoneBook.add(NICKNAME, input);
		input = prompt("Enter phonenumber");
		phoneBook.add(PHONENUMBER, input);
		input = prompt("Enter darkest secret");
		phoneBook.add(DARKESTSECRET, input);
		std::cout << "Afeter adding contact, actual id is = " << phoneBook.getId() << std::endl;
	}
}

int	main(void)
{
	PhoneBook	phoneBook;

	askForInputs(phoneBook);
	return (0);
}
