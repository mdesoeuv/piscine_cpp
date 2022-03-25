/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:19 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 11:08:45 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& source) : ClapTrap(source)
{
	_HitPoints = source._HitPoints;
	_EnergyPoints = source._EnergyPoints;
	_AttackDamage = source._AttackDamage;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& source)
{
	ClapTrap::operator=(source);
	
	return (*this);
}

void	FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " << _Name << " attacks " << target << " who looses " << _AttackDamage << " HP !" << std::endl;
	_EnergyPoints -= 1;
	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _Name << " starts a high fives" << std::endl;
}
