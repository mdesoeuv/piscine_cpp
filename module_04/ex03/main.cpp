/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:28:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/23 16:02:16 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	Character	Cloud("Cloud");
	Character	Bareth("Bareth");
	Ice			*Materia1 = new Ice();
	Ice			*Materia2 = new Ice();
	Cure		*Materia3 = new Cure();
	Cure		*Materia4 = new Cure();
	Ice			*Materia5 = new Ice();

	AMateria	*MateriaClone = Materia1->clone();

	std::cout << std::endl << "Cloud actions :" << std::endl;
	Cloud.use(0, Bareth);
	Cloud.equip(Materia1);
	Cloud.use(0, Bareth);
	Cloud.unequip(1);
	Cloud.unequip(0);
	Cloud.equip(Materia3);
	Cloud.use(0, Bareth);
	Cloud.equip(MateriaClone);
	Cloud.equip(Materia2);
	Cloud.equip(Materia4);
	Cloud.equip(Materia5);
	delete Materia1;
	delete Materia5;

	std::cout << std::endl << "Cloud actions bis:" << std::endl;
	Cloud.use(0, Bareth);
	Cloud.use(1, Bareth);
	Cloud.use(2, Bareth);
	Cloud.use(3, Bareth);
	std::cout << std::endl;

	Character	Zack(Cloud);
	std::cout<< std::endl  << "Zack actions :" << std::endl;
	Zack.use(0, Bareth);
	Zack.use(1, Bareth);
	Zack.use(2, Bareth);
	Zack.use(3, Bareth);
	std::cout << std::endl;

	std::cout << std::endl << "Cloud actions ter:" << std::endl;
	Cloud.unequip(0);
	Cloud.use(0, Bareth);
	Cloud.use(1, Bareth);
	Cloud.use(2, Bareth);
	Cloud.use(3, Bareth);
	std::cout << std::endl;
	delete Materia3;

	std::cout << std::endl << "Zack actions :" << std::endl;
	Zack.use(0, Bareth);
	Zack.use(1, Bareth);
	Zack.use(2, Bareth);
	Zack.use(3, Bareth);
	std::cout << std::endl;

	Zack = Cloud;
	std::cout << std::endl << "Zack actions :" << std::endl;
	std::cout << "Zack = Cloud" << std::endl;
	Zack.use(0, Bareth);
	Zack.use(1, Bareth);
	Zack.use(2, Bareth);
	Zack.use(3, Bareth);
	std::cout << std::endl;

	MateriaSource	MateriaGenerator;
	AMateria		*NewMateria = new Ice();

	std::cout << std::endl;
	MateriaGenerator.learnMateria(NewMateria);
	AMateria *result = MateriaGenerator.createMateria("zoub");
	if (result == NULL)
		std::cout << "materia not learned" << std::endl;
	result = MateriaGenerator.createMateria("Ice");
	result->use(Zack);
	std::cout << std::endl;
	delete NewMateria;
	delete result;

	return (0);
}