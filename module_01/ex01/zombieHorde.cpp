/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:50:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 15:50:22 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie* horde;
	
	if (N <= 0)
		return (NULL);
	try
	{
		horde = new Zombie[N];
	}
	catch(std::bad_alloc&)
	{
		std::cerr << "error : allocation failed" << std::endl;
		exit (EXIT_FAILURE);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].setname(name);
	}
	return (horde);
}
