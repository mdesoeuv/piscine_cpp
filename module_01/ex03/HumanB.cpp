/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:30:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 18:15:21 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB is constructed" << std::endl;
}

HumanB::HumanB(std::string name, Weapon* weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanB is constructed and has a weapon" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB is destructed" << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}
