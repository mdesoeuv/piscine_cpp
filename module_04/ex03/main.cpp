/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:28:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 14:25:57 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int	main(void)
{
	Character	Cloud("Cloud");
	Character	Bareth("Bareth");
	Ice			*Materia1 = new Ice();
	Ice			*Materia2 = new Ice();
	Cure		*Materia3 = new Cure();
	Cure		*Materia4 = new Cure();
	Cure		*Materia5 = new Cure();

	AMateria	*MateriaClone = Materia1->clone();

	std::cout << std::endl;
	std::cout << "Cloud actions :" << std::endl;
	Cloud.use(0, Bareth);
	Cloud.equip(Materia1);
	Cloud.use(0, Bareth);
	Cloud.unequip(1);
	Cloud.equip(Materia3);
	Cloud.unequip(0);
	delete Materia1;
	Cloud.use(0, Bareth);
	Cloud.equip(MateriaClone);
	Cloud.equip(Materia2);
	Cloud.equip(Materia4);
	Cloud.equip(Materia5);
	delete Materia5;
	std::cout << std::endl;
	std::cout << "Cloud actions bis:" << std::endl;
	Cloud.use(0, Bareth);
	Cloud.use(1, Bareth);
	Cloud.use(2, Bareth);
	Cloud.use(3, Bareth);

	Character	Zack(Cloud);
	std::cout << std::endl;
	std::cout << "Zack actions :" << std::endl;
	Zack.use(0, Bareth);
	Zack.use(1, Bareth);
	Zack.use(2, Bareth);
	Zack.use(3, Bareth);
	std::cout << std::endl;
	return (0);
}