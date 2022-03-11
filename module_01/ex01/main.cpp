/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:49:23 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 10:20:12 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	try
	{
		int horde_size = 10;
		Zombie* horde = zombieHorde(horde_size, "Jean-Paul");
		
		for (int i=0; i < horde_size; i++)
		{
			horde[i].announce();
		}
		delete[](horde);
	}
	catch (const std::bad_alloc& e)
	{
		std::cerr << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
