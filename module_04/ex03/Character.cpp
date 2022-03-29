/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:48:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 09:25:26 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void) : ICharacter(), name(""), equippedMateriaNb(0)
{
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = 0;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string Name) : ICharacter(), name(Name), equippedMateriaNb(0)
{
	for (size_t i = 0; i < 4; ++i)
	{
		slot[i] = 0;
	}
	std::cout << "Character constructor called" << std::endl;
}

Character::Character(const Character& source) :	ICharacter(source),
												name(source.name),
												equippedMateriaNb(source.equippedMateriaNb)
{
	for (int i = 0; i < 4; ++i)
	{
		slot[i] = source.slot[i];
		if (source.slot[i])
			inventory[i] = source.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
}

Character::~Character(void)
{
	for (int i = 0; i < 4; ++i)
	{
		if (slot[i])
			delete inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(const Character& source)
{
	this->name = source.name;
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
	return (*this);
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
			inventory[i] = m;
			slot[i] = 1;
			break ;
		}
		i++;
	}
	equippedMateriaNb++;
	std::cout << m->getType() << " materia equipped in slot " << i << std::endl;	
}

void	Character::unequip(int index)
{
	if (equippedMateriaNb == 0)
	{
		std::cout << "unable to unequip : no materia equipped" << std::endl;
		return ;
	}
	if (index >= 4 || slot[index] == 0)
	{
		std::cout << "unable to unequip : no materia equipped slot " << index << std::endl;
		return ; 
	}
	std::cout << inventory[index]->getType() << " materia unequipped from slot " << index << std::endl;
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
	if (index >= 4 || slot[index] == 0)
	{
		std::cout << "unable to use : no materia equipped in slot" << index << std::endl;
		return ; 
	}
	inventory[index]->use(target);
}

AMateria	*Character::showMateria(int index)
{
	if (equippedMateriaNb == 0)
	{
		std::cout << "unable to show : no materia equipped" << std::endl;
		return (NULL);
	}
	if (index >= 4 || slot[index] == 0)
	{
		std::cout << "unable to show : no materia equipped slot " << index << std::endl;
		return (NULL); 
	}
	return (inventory[index]);
}
