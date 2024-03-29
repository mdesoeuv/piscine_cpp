/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:04:22 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 11:07:15 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _Name(""), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap standard constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, unsigned HitPoints, unsigned EnergyPoints, unsigned AttackDammage) :	_Name(name),
																													_HitPoints(HitPoints),
																													_EnergyPoints(EnergyPoints),
																													_AttackDamage(AttackDammage)
{
}

ClapTrap::ClapTrap(const ClapTrap &source) :	_Name(source._Name), 
												_HitPoints(source._HitPoints), 
												_EnergyPoints(source._EnergyPoints), 
												_AttackDamage(source._AttackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &source)
{
	this->_AttackDamage = source._AttackDamage;
	this->_EnergyPoints = source._EnergyPoints;
	this->_HitPoints = source._HitPoints;
	this->_Name = source._Name;

	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_HitPoints == 0)
	{
		std::cout << _Name << " is dead and can't perform this action" << std::endl;
		return ;
	}
	if (_EnergyPoints < 1)
	{
		std::cout << _Name << " has not enough energy points to perform this action" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _Name << " attacks " << target << " who looses " << _AttackDamage << " HP !" << std::endl;
	_EnergyPoints -= 1;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints == 0)
	{
		std::cout << _Name << " is dead and can't perform this action" << std::endl;
		return ;
	}
	if (_EnergyPoints < 1)
	{
		std::cout << _Name << " has not enough energy points to perform this action" << std::endl;
		return ;
	}
	_HitPoints += amount;
	std::cout << _Name << " is being repaired and regains " << amount << " HP for a total of " << _HitPoints << " HP !" << std::endl;
	_EnergyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)_HitPoints - (int)amount < 0)
		_HitPoints = 0;
	else
		_HitPoints -= amount;
	std::cout << _Name << " takes " << amount << " damages and now has " << _HitPoints << " HP !" << std::endl;
}

void	ClapTrap::displayAttributes(void) const
{
	std::cout << _Name << " reports its status ! HP : " << _HitPoints << " / Energy : " << _EnergyPoints << " / Attack : " << _AttackDamage << std::endl;
}
