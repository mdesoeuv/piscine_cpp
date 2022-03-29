/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:42:51 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	Michel("Michel", 1);
	Bureaucrat	JeanLouis("Jean-Louis", 150);
	Intern		Kevin;

	std::cout << std::endl << Michel << JeanLouis << std::endl;
	
	try
	{
		Form	*A = Kevin.makeForm("robotomy request", "Roger");
		Michel.signForm(*A);
		Michel.executeForm(*A);
		delete A;
		Form*	B = Kevin.makeForm("dumb request", "Roger");
		if (B)
		{
			Michel.signForm(*B);
			Michel.executeForm(*B);
		}
		else
			std::cout << "Form not created" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;

	return (0);
}