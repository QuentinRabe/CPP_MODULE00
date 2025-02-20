/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 07:27:10 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/20 12:35:57y arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

static void	addingProcess(PhoneBook &phoneBook)
{
	phoneBook.askForInputs(FIRSTNAME, "Enter the first name");
	phoneBook.askForInputs(LASTNAME, "Enter the last name");
	phoneBook.askForInputs(NICKNAME, "Enter the nickname");
	phoneBook.askForInputs(PHONENUMBER, "Enter the phone number");
	phoneBook.askForInputs(DARKESTSECRET, "Enter the darkest secret");
}

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	userOpt = "";

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	while (1)
	{
		std::cout << "You can choose from the following options: ADD, SEARCH, or EXIT : ";
		std::getline(std::cin, userOpt);
		if (std::cin.eof())
			exit(0);
		while (userOpt.empty())
		{
			std::cout << "Please, retry with not empty value. Choose one between ADD, SEARCH and EXIT : ";
			std::getline(std::cin, userOpt);
			if (std::cin.eof())
				exit(0);
		}
		if (userOpt == "ADD")
			addingProcess(phoneBook);
		else if (userOpt == "SEARCH")
			phoneBook.search();
		else if (userOpt == "EXIT")
			exit(0);
	}
	return (0);
}
