/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:56:09 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 09:33:50 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		const Animal* meta = new Animal();
		const Animal* rex = new Dog();
		const Animal* minou = new Cat();

		std::cout << std::endl;
		std::cout << meta->getType() << " : ";
		meta->makeSound();
		std::cout << std::endl;
		std::cout << rex->getType() << " : ";
		rex->makeSound();
		std::cout << std::endl;
		std::cout << minou->getType() << " : ";
		minou->makeSound();
		std::cout << std::endl << std::endl;

		delete meta;
		delete rex;
		delete minou;
	}
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	miaouss = new WrongCat();
		const WrongCat*		wrongMinou = new WrongCat();

		std::cout << std::endl;
		std::cout << meta->getType() << " : ";
		meta->makeSound();
		std::cout << std::endl;
		std::cout << miaouss->getType() << " : ";
		miaouss->makeSound();
		std::cout << std::endl;
		std::cout << wrongMinou->getType() << " : ";
		wrongMinou->makeSound();
		std::cout << std::endl;

		delete meta;
		delete miaouss;
		delete wrongMinou;
	}
	return 0;
}
