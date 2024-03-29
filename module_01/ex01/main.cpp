/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:49:23 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:33:58 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int horde_size = 10;

	try
	{
		Zombie* horde = zombieHorde(horde_size, "Jean-Paul");
		for (int i=0; i < horde_size; i++)
		{
			horde[i].announce();
		}
		delete[](horde);
	}
	catch(std::bad_alloc& e)
	{
		std::cout << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
