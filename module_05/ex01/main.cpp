/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/24 10:47:55 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	Michel("Michel", 1);
	Bureaucrat	JeanLouis("Jean-Louis", 150);

	Form		A("B42HC138", 150, 145);
	Form		B("B15HF172", 1, 1);
	Form		E(A);
	Form		F(B);

	try
	{
		Form	C("FORM ERROR A", 0, 150);
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form	D("FORM ERROR B", 1, 151);
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << Michel << JeanLouis << std::endl;
	
	Michel.signForm(A);
	Michel.signForm(B);

	std::cout << std::endl;

	JeanLouis.signForm(A);
	JeanLouis.signForm(E);
	JeanLouis.signForm(F);
	
	std::cout << std::endl;
	
	return (0);
}