/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:08:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:26:59 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

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

void	ShrubberyCreationForm::specialFunction(void) const
{
	
	std::ofstream	output_file(target + "_shrubbery", std::ios::out | std::ios::app);
	if (!output_file)
	{
		std::cout << "error: cannot create output file" << std::endl;
		throw Form::executionError;

	}
	output_file << "             v .   ._, |_  .,\n" 
	<< "           -._\\/  .  \\ /    |/_\n" <<
"               \\  _\\, y | \\//\n" << 
"         _\\_.___\\, \\/ -.\\||\n" << 
"           7-,--. ._||  / / ,\n" << 
"           /       -.  ./ / |/_.\n" << 
"                     |    |//\n" << 
"                     |_    /\n" <<
"                     |-   |\n" << 
"                     |   =|\n" << 
"                     |    |\n" <<
"--------------------/ ,  . \\--------._\n";
	output_file.close();
}

// void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
// {
// 	try
// 	{
// 		checkRequirements(executor);
// 	}
// 	catch(Form::UnsignedFormException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		throw Form::ExecutionErrorException();
		
// 	}
// 	catch(Form::GradeTooLowException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 		throw Form::ExecutionErrorException();
// 	}
// 	specialFunction();
// }
