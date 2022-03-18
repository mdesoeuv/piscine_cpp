/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:10:12 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 13:35:44 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// const unsigned ScavTrap::ATTACK_DAMAGE(20);
// const unsigned ScavTrap::ENERGY(50);
// const unsigned ScavTrap::HITPOINTS(10);

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_HitPoints = 10;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = 10;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source)
{
	_HitPoints = source._HitPoints;
	_EnergyPoints = source._EnergyPoints;
	_AttackDamage = source._AttackDamage;
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _Name << " entered Gate keeper mode" << std::endl;
}
