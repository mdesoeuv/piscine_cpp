/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:11:19 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 15:52:51 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const unsigned FragTrap::ATTACK_DAMAGE(30);
const unsigned FragTrap::ENERGY(100);
const unsigned FragTrap::HITPOINTS(100);

FragTrap::FragTrap(void) : ClapTrap()
{
	_HitPoints = HITPOINTS;
	_EnergyPoints = ENERGY;
	_AttackDamage = ATTACK_DAMAGE;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_HitPoints = HITPOINTS;
	_EnergyPoints = ENERGY;
	_AttackDamage = ATTACK_DAMAGE;
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _Name << " starts a high fives" << std::endl;
}
