/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 15:20:47 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 16:01:36 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void) : materiaNb(0)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& source) : materiaNb(source.materiaNb)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < source.materiaNb; ++i)
	{
		materiaTab[i] = source.materiaTab[i]->clone();
	}
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < materiaNb; ++i)
	{
		delete materiaTab[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource& source)
{
	for (int i = 0; i < materiaNb; ++i)
	{
		delete materiaTab[i];
	}
	materiaNb = source.materiaNb;
	for (int i = 0; i < source.materiaNb; ++i)
	{
		materiaTab[i] = source.materiaTab[i]->clone();
	}
	
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *source)
{
	if (materiaNb == 4)
	{
		std::cout << "SourceMateria full" << std::endl;
		return ;
	}
	materiaTab[materiaNb] = source->clone();
	materiaNb++;
	std::cout << "learned " << source->getType() << " materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < materiaNb)
	{
		if (materiaTab[i]->getType() == type)
			return (materiaTab[i]->clone());
		i++;
	}
	std::cout << "type not learned : " << type << std::endl;
	return (NULL);
}
