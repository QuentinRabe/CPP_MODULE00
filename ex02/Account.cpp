/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 10:04:05 by arabefam          #+#    #+#             */
/*   Updated: 2025/03/12 12:10:04 by arabefam         ###   ########.fr       */
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
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = Account::getNbAccounts() - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

bool	Account::makeWithdrawal( int withDrawal) {
	if (this->checkAmount() < withDrawal) {
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawl:refused" << std::endl;
		return (false);
	}
	else {
		Account::_displayTimestamp();
		int	p_amount = this->_amount;
		this->_amount -= withDrawal;
		_totalAmount -= withDrawal;
		this->_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount\
<< ";withdrawal:" << withDrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::makeDeposit( int deposit ) {
	int	p_amount = this->_amount;

	this->_nbDeposits += 1;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << p_amount\
<< ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

int	Account::checkAmount( void ) const {
	return (this->_amount);
}

int	Account::getNbAccounts( void ) {
	return	(_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return	(_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return	(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return	(_totalNbWithdrawals);
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount\
<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << _totalAmount\
<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	timeNow = std::time(NULL);
	std::tm	*localTime = std::localtime(&timeNow);
	std::cout << "[" << 1900 + localTime->tm_year\
<< std::setw(2) << std::setfill('0') << 1 + localTime->tm_mon\
<< std::setw(2) << std::setfill('0') << localTime->tm_mday << "_"\
<< std::setw(2) << std::setfill('0') << localTime->tm_hour\
<< std::setw(2) << std::setfill('0') << localTime->tm_min\
<< std::setw(2) << std::setfill('0') << localTime->tm_sec << "] ";
}
