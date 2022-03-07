/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:29:36 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/07 18:56:05 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

Account::Account(void) : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts = 1;
	displayAccountsInfos();
	std::cout << "created" << std::endl;
}

Account::Account(int deposit) : _amount(deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += deposit;
	_accountIndex = _nbAccounts - 1;
	displayAccountsInfos();
	std::cout << "created" << std::endl;


}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
		return (false);
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";" \
		<< "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
	
}

void	Account::displayAccountsInfos(void)
{
	
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

	std::cout << "[" << std::put_time(&tm, "%Y%m%d") << "_" << std::put_time(&tm, "%H%M%S") << std::endl;	
}
