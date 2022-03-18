/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:58:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:38:59 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{	
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string&	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
