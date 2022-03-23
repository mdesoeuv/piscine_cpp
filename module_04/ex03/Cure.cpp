/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:34:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 11:53:32 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria()
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const &SourceType) : AMateria(SourceType)
{
	std::cout << "Cure constructor called" << std::endl;	
}

Cure::Cure(const Cure& source) : AMateria(source)
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
