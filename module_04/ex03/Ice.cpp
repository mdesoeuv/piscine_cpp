/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:34:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 11:51:46 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria()
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const &SourceType) : AMateria(SourceType)
{
	std::cout << "Ice constructor called" << std::endl;	
}

Ice::Ice(const Ice& source) : AMateria(source)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice& source)
{
	type = source.type;
}

Ice	*Ice::clone(void) const
{
	Ice *IceClone = new Ice(*this);

	return (IceClone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}
