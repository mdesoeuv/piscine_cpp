/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:32:07 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 14:34:11 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void) : type("no type")
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &sourceType) : type(sourceType)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& source) : type(source.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* void materia : no effect on " << target.getName() << " *" << std::endl;
}