/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:04:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:48:04 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = "Burn the world !!!";
	}
}

Brain::Brain(const Brain& source)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = source.ideas[i];		
	}
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain& source)
{
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = source.ideas[i];		
	}

	return (*this);
}

void	Brain::displayIdea(size_t index) const
{
	if (index > 100)
	{
		return ;
	}
	std::cout << this->ideas[index] << std::endl;
}

void	Brain::setIdea(const std::string& newIdea, size_t index)
{
	if (index > 100)
	{
		std::cout << "this Brain cannot hold more than 100 ideas, please be nice with it." << std::endl;
		return ;
	}
	ideas[index] = newIdea;
}
