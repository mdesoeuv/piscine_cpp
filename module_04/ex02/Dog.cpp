/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:22:10 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 17:04:21 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
	dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& source) : Animal(source)
{
	dogBrain = new Brain();
	*dogBrain = *source.dogBrain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete dogBrain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog& source)
{
	this->type = source.type;
	*dogBrain = *source.dogBrain;

	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "waf waf" << std::endl;
}

void	Dog::displayFirstTenIdeas(void) const
{
	std::cout << "displaying first 10 ideas :" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		dogBrain->displayIdea(i);
	}
}

void	Dog::setIdea(const std::string& newIdea, size_t index)
{
	dogBrain->setIdea(newIdea, index);
}
