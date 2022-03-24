/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:08:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:19:41 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& source) : Form(source), target(source.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& Name, const std::string& Target) : Form(Name, 25, 5), target(Target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::specialFunction(void) const
{
	std::cout << target << " has been forgiven by our beloved President Zaphod Beeblebrox" << std::endl;
}
