/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 12:13:46 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/09 12:17:43 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

int	main(void)
{
	Zombie* Marcel;

	Marcel = newZombie("Marcel");
	Marcel->announce();
	randomChump("Roger");
	delete Marcel;
}