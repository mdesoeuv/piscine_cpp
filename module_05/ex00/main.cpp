/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 10:53:17 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"

int	main(void)
{
	Bureaucrat	Michel("Michel", 1);
	Bureaucrat	JeanLouis("Jean-Louis", 150);

	std::cout << std::endl << Michel << JeanLouis << std::endl << std::endl;
	try
	{
		Michel.downGrade(); 
		std::cout << Michel << std::endl;
		Michel.upGrade();
		std::cout << Michel << std::endl;
		
		Michel.upGrade();
		std::cout << JeanLouis << std::endl << std::endl;
		
		JeanLouis.downGrade();

		Bureaucrat	Isidor("Isidor", -7);
		Bureaucrat	Isildur("Isildur", 151);

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}