/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:31:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:55:58 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	Animal *Animals[100];
	
	for (size_t i = 0; i < 50; i++)
	{
		Animals[i] = new Dog();
	}
	for (size_t i = 50; i < 100; i++)
	{
		Animals[i] = new Cat();
	}
	
	Cat *StrangeCat;

	StrangeCat = (Cat *)(Animals[50]);
	
	Cat CopyCat(*StrangeCat);

	StrangeCat->displayFirstTenIdeas();
	CopyCat.displayFirstTenIdeas();

	std::cout << "\nchanged one idea" << std::endl;

	StrangeCat->setIdea("I want to make some cookies !", 0);
	
	StrangeCat->displayFirstTenIdeas();
	CopyCat.displayFirstTenIdeas();
	
	for (size_t i = 0; i < 100; i++)
	{
		delete Animals[i];
	}

	return (0);
}
