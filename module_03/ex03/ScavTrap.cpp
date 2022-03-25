/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:10:12 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 11:09:25 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("", 100, 50, 20)
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& source)
{
	this->_AttackDamage = source._AttackDamage;
	this->_EnergyPoints = source._EnergyPoints;
	this->_HitPoints = source._HitPoints;
	this->_Name = source._Name;
	
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
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
	std::cout << "ScavTrap " << _Name << " attacks " << target << " who looses " << _AttackDamage << " HP !" << std::endl;
	_EnergyPoints -= 1;
	
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _Name << " entered Gate keeper mode" << std::endl;
}
