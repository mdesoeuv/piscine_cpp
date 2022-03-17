/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/17 11:06:07 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	{
		ClapTrap Roger("Roger");
		ScavTrap Pascal("Pascal");

		Roger.displayAttributes();
		Pascal.displayAttributes();
		Roger.attack("Pascal");
		Pascal.takeDamage(0);
		Pascal.beRepaired(25);
		Pascal.attack("Roger");
		Pascal.guardGate();
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
		ScavTrap Edouard("Edouard");
		ScavTrap Charles_Edouard(Edouard);
		
		Edouard.displayAttributes();
		Charles_Edouard.displayAttributes();
	}
	return (0);
}