/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:34:21 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 16:43:06 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& source) : Animal()
{
	type = source.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat& source)
{
	this->type = source.type;

	return (*this);
}

