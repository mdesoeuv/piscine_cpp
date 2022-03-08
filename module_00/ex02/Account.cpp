/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:29:36 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/08 13:03:25 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits  = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts = 1;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(int deposit) : _amount(deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += deposit;
	_accountIndex = _nbAccounts - 1;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;


}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
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
	int	p_amount = _amount;

	this->_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" \
		<< "deposit:" << deposit << ";" << "amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;
	bool accepted = true;
	
	if (_amount - withdrawal < 0)
		accepted = false;
	else
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" << "p_amount:" << p_amount << ";" \
		<< "withdrawal:";
	if (accepted == false)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";" << "amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
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
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

	std::cout << "[" << std::put_time(&tm, "%Y%m%d") << "_" << std::put_time(&tm, "%H%M%S") << "]";	
}
