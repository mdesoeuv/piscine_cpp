/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:34:21 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 17:45:04 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
	catBrain = new Brain();
	
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& source) : Animal(source)
{
	catBrain = new Brain();
	*catBrain = *source.catBrain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete catBrain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat& source)
{
	this->type = source.type;
	delete catBrain;
	catBrain = new Brain(*source.catBrain);
	*catBrain = *source.catBrain;

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meooowwwww" << std::endl;
}

void	Cat::displayFirstTenIdeas(void) const
{
	std::cout << "displaying first 10 ideas :" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		catBrain->displayIdea(i);
	}
}

void	Cat::setIdea(const std::string& newIdea, size_t index)
{
	catBrain->setIdea(newIdea, index);
}
