/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:08:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:19:41 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& source) : Form(source), target(source.target)
{
	srand(time(NULL));
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& Name, const std::string& Target) : Form(Name, 72, 45), target(Target)
{
	srand(time(NULL));
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::specialFunction(void) const
{
	int result;

	std::cout << "* Driller noises can be heard *" << std::endl;
	result = rand() % 2;
	if (result)
		std::cout << target << " has been robotomised" << std::endl;
	else
		std::cout << target << " resisted the robotomisation" << std::endl;
}
