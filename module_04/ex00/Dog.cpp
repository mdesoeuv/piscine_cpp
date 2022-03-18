/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:22:10 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 16:48:41 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& source) : Animal()
{
	type = source.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog& source)
{
	this->type = source.type;

	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "waf waf" << std::endl;
}
