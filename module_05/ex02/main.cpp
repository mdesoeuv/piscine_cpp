/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 15:20:36 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	Michel("Michel", 1);
	Bureaucrat	JeanLouis("Jean-Louis", 150);

	ShrubberyCreationForm		A("A493728B01", "Forest B12");
	RobotomyRequestForm			R("R7294772", "Paul");

	
	std::cout << std::endl << Michel << JeanLouis << std::endl;
	
	Michel.signForm(A);
	Michel.executeForm(A);

	std::cout << std::endl;

	Michel.executeForm(R);
	Michel.signForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	Michel.executeForm(R);
	
	std::cout << std::endl;
	
	JeanLouis.executeForm(R);

	std::cout << std::endl;
	
	return (0);
}