/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:08:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 11:33:03 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("default form", 145, 137), target("unknown")
// {
// 	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
// }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& source) : Form(source), target(source.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Name, const std::string& Target) : Form(Name, 145, 137), target(Target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

// ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
// {
// }

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->
}
