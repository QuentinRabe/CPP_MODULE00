/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:35:15 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 11:43:02 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toUpper( char *str ) {
	int	i;

	i = -1;
	while (str[++i])
		str[i] = std::toupper(str[i]);
}

int	main( int ac, char **av ) {
	int			i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		i = 0;
		while (av[++i]) {
			toUpper(av[i]);
			if (av[i + 1])
				std::cout << av[i] << " ";
			else
				std::cout << av[i] << std::endl;
		}
	}
	return (0);
}
