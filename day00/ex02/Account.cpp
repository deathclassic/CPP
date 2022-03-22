/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:13:53 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/24 19:35:02 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::checkAmount(void) const {
	return (_amount);
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

int Account::getTotalAmount(void) {
	return (_totalAmount);
}

void	Account::_displayTimestamp(void) {
	time_t t;
	
	t = std::time(0);
	std::tm *now = std::localtime(&t);
	std::cout << "[" << (now->tm_year + 1900) << 
	std::setw(2) << std::setfill('0') << now->tm_mon + 1 << 
	std::setw(2) << std::setfill('0') << now->tm_mday << "_" <<
	std::setw(2) << std::setfill('0') << now->tm_hour <<
	std::setw(2) << std::setfill('0') << now->tm_min << 
	std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits(0),
	_nbWithdrawals(0)  {
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts ++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" 
	<< _amount << ";" << "created\n";
}

Account::Account() : _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	_accountIndex = _nbAccounts;
	Account::_nbAccounts ++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" 
	<< _amount << ";" << "created\n";
}

Account::~Account(void) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';' << "amount:"<< _amount << ';'
	<< "closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";" <<
	"p_amount:" << _amount << ";" <<
	"deposit:" << deposit << ";" <<
	"amount:" << _amount + deposit << ";" <<
	"nb_deposits:" << _nbDeposits << "\n";
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" <<
	"p_amount:" << _amount << ";" << "withdrawal:";
	if (withdrawal > checkAmount()) {
		std::cout << "refused\n";
		return (false);
	}
	_nbWithdrawals += 1;
	_amount -= withdrawal;
	std::cout << withdrawal << ";" << "amount:" << _amount << ";" <<
	"nb_withdrawals:" << _nbWithdrawals << "\n";
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	return (true);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" <<
	"deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";"
	<< "total:" << Account::getTotalAmount() << ";" 
	<< "deposits:" << Account::getNbDeposits() << ";"
	<< "withdrawals:" << Account::getNbWithdrawals() << "\n"; 
}
