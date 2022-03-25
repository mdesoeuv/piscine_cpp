/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:51:39 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 11:11:08 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->FragTrap::_HitPoints = 100;
	this->ScavTrap::_EnergyPoints = 50;
	this->FragTrap::_AttackDamage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _Name(name)
{
	this->FragTrap::_HitPoints = 100;
	this->ScavTrap::_EnergyPoints = 50;
	this->FragTrap::_AttackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source) :	ClapTrap(), 
														ScavTrap(),
														FragTrap(),
														_Name(source._Name)
{
	this->FragTrap::_HitPoints = source.FragTrap::_HitPoints;
	this->ScavTrap::_EnergyPoints = source.ScavTrap::_EnergyPoints;
	this->FragTrap::_AttackDamage = source.FragTrap::_AttackDamage;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _Name << " destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& source)
{
	this->_Name = source.DiamondTrap::_Name;
	this->FragTrap::_HitPoints = source.FragTrap::_HitPoints;
	this->ScavTrap::_EnergyPoints = source.ScavTrap::_EnergyPoints;
	this->FragTrap::_AttackDamage = source.FragTrap::_AttackDamage;

	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap " << this->DiamondTrap::_Name << " constructed from ClapTrap " << ClapTrap::_Name << std::endl;
}