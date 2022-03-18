/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:51:39 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 15:53:36 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	_AttackDamage = FragTrap::ATTACK_DAMAGE;
	_HitPoints = FragTrap::HITPOINTS;
	_EnergyPoints = ScavTrap::ENERGY;
	std::cout << "DiamondTrap default constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _Name(name) {
	_AttackDamage = FragTrap::ATTACK_DAMAGE;
	_HitPoints = FragTrap::HITPOINTS;
	_EnergyPoints = ScavTrap::ENERGY;

	std::cout << "DiamondTrap constructor called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& source) :	ClapTrap(source), 
														ScavTrap(source),
														FragTrap(source),
														_Name(source._Name)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _Name << " destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& source)
{
	_Name = source._Name;
	_HitPoints = source._HitPoints;
	_EnergyPoints = source._EnergyPoints;
	_AttackDamage = source._AttackDamage;

	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap " << _Name << " constructed from ClapTrap " << ClapTrap::_Name << std::endl;
}