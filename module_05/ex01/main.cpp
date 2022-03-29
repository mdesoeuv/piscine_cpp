/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:50:04 by mdesoeuv         ###   ########lyon.fr   */
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
		std::cout << "trying to create a Form with invalid required sign grade:" << std::endl;
		Form	C("FORM ERROR A", 0, 150);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "trying to create a Form with invalid required execution grade:" << std::endl;
		Form	D("FORM ERROR B", 1, 151);
	}
	catch(std::exception& e)
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