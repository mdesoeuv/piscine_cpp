/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 16:04:35 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Roger("Roger");
	ClapTrap Pascal("Pascal");

	Roger.attack("Pascal");
	Pascal.takeDamage(0);
	Pascal.beRepaired(25);
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");
	Pascal.attack("Roger");

	ClapTrap Jean_Pascal(Pascal);
	
	Jean_Pascal.attack("Pascal");
	Jean_Pascal.beRepaired(10);

	return (0);
}