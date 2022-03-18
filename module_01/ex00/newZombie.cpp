/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:01:04 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:24:17 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name) throw(std::bad_alloc)
{
	Zombie	*newGuy;

	try
	{
		newGuy = new Zombie(name);
	}
	catch(std::bad_alloc&)
	{
		std::cerr << "error : allocation failed" << std::endl;
		std::exit (EXIT_FAILURE);
	}
	return (newGuy);
}
