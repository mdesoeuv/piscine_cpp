/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 15:40:53 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		ClapTrap Roger("Roger");
		FragTrap Pascal("Pascal");
		ScavTrap Michel("Michel");
		DiamondTrap	Jackie("Jackie");

		std::cout << "ClapTrap :" << std::endl;
		Roger.displayAttributes();
		std::cout << "FragTrap :" << std::endl;
		Pascal.displayAttributes();
		std::cout << "ScavTrap :" << std::endl;
		Michel.displayAttributes();
		std::cout << "DiamondTrap :" << std::endl;
		Jackie.displayAttributes();
		Jackie.whoAmI();

	}
	{
		DiamondTrap Edouard("Edouard");
		DiamondTrap Charles_Edouard(Edouard);

		Edouard.displayAttributes();
		Charles_Edouard.displayAttributes();
	}
	return (0);
}