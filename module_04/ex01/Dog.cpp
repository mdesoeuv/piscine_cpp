/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:22:10 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:44:26 by mdesoeuv         ###   ########lyon.fr   */
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
