/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:09:42 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 18:30:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Blob")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string& Type) : type(Type)
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

const std::string	&Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "burp..." << std::endl;
}
