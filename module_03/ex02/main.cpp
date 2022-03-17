/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/17 13:16:31 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		ClapTrap Roger("Roger");
		FragTrap Pascal("Pascal");

		Roger.displayAttributes();
		Pascal.displayAttributes();
		Roger.attack("Pascal");
		Pascal.takeDamage(0);
		Pascal.beRepaired(25);
		Pascal.attack("Roger");
		Pascal.highFivesGuys();
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
		Pascal.attack("Roger");
	}
	{
		FragTrap Edouard("Edouard");
		FragTrap Charles_Edouard(Edouard);
		
		Edouard.displayAttributes();
		Charles_Edouard.displayAttributes();
	}
	return (0);
}