/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:04:05 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/02 10:51:04 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	int	index;

	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_totalNbDeposits += 1;
	index = Account::getNbAccounts() - 1;
	Account::_displayTimestamp();
	std::cout << "index:" << index << ";amount:" << this->_amount << ";created" << std::endl;
}


Account::~Account( void ) {}


int	Account::getNbAccounts( void ) {
	return	(_nbAccounts);
}

void	Account::_displayTimestamp( void ) {
	std::time_t	timeNow = std::time(nullptr);
	std::tm	*localTime = std::localtime(&timeNow);
	std::cout << "[" << 1900 + localTime->tm_year\
<< std::setw(2) << std::setfill('0') << 1 + localTime->tm_mon\
<< std::setw(2) << std::setfill('0') << localTime->tm_mday << "_"\
<< std::setw(2) << std::setfill('0') << localTime->tm_hour\
<< std::setw(2) << std::setfill('0') << localTime->tm_min\
<< std::setw(2) << std::setfill('0') << localTime->tm_sec << "] ";
}
