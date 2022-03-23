/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:48:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 10:28:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) : equippedMateriaNb(0), name("")
{
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = 0;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string Name) : equippedMateriaNb(0), name(Name)
{
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = 0;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& source) :	equippedMateriaNb(source.equippedMateriaNb),
												name(source.name)
{
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = source.slot[i];
	}
	for (size_t i = 0; i < source.equippedMateriaNb; ++i)
	{
		inventory[i] = source.inventory[i]->clone();
	}
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(const Character& source)
{
	for (size_t i = 0; i < 4; ++i)
	{
		if (slot[i])
			delete inventory[i];
	}
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = source.slot[i];
	}
	for (size_t i = 0; i < 4; ++i)
	{
		if (source.slot[i])
			inventory[i] = source.inventory[i]->clone();
	}
}

std::string const	&Character::getName(void) const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (equippedMateriaNb == 4)
	{
		std::cout << "unable to equip the materia" << std::endl;
		return ;
	}
	int i = 0;
	while (i < 4)
	{	
		if (slot[i] == 0)
		{
			inventory[equippedMateriaNb] = m;
			slot[i] = 1;
			break ;
		}
		i++;
	}
	equippedMateriaNb++;
	std::cout << "materia equipped" << std::endl;	
}

void	Character::unequip(int index)
{
	if (equippedMateriaNb == 0)
	{
		std::cout << "unable to unequip : no materia equipped" << std::endl;
		return ;
	}
	if (index >= equippedMateriaNb || slot[index] == 0)
	{
		std::cout << "unable to unequip : no materia equipped in that slot" << std::endl;
		return ; 
	}
	inventory[index] = NULL;
	slot[index] = 0;
	equippedMateriaNb--;
}

void	Character::use(int index, ICharacter& target)
{
	if (equippedMateriaNb == 0)
	{
		std::cout << "unable to use : no materia equipped" << std::endl;
		return ;
	}
	if (index >= equippedMateriaNb || slot[index] == 0)
	{
		std::cout << "unable to use : no materia equipped in that slot" << std::endl;
		return ; 
	}
	inventory[index]->use(target);
}
