/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:34:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 14:34:42 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("Cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& source) : AMateria(source.type)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure& source)
{
	type = source.type;

	return (*this);
}

Cure	*Cure::clone(void) const
{
	Cure *CureClone = new Cure(*this);

	return (CureClone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<  "'s wounds *" << std::endl;
}
