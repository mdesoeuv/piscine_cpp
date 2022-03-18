/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:09:42 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 16:40:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& source) : type(source.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal& source)
{
	this->type = source.type;

	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "meooowwwww" << std::endl;
}
