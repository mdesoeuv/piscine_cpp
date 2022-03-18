/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:13:46 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:28:39 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

int	main(void)
{
	Zombie* Marcel;

	try
	{
		Marcel = newZombie("Marcel");
		Marcel->announce();
		delete Marcel;
	}
	catch(std::bad_alloc& e)
	{
		std::cout << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	randomChump("Roger");
}