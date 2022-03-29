/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:56:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 11:47:52 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
		
		std::cout << std::endl << Michel << JeanLouis << std::endl << std::endl;
		std::cout << "trying to upgrade to grade 0" << std::endl;
		Michel.upGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << JeanLouis << std::endl << std::endl;
		std::cout << "trying to downgrade to 151" << std::endl;
		JeanLouis.downGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "trying to construct with grade -7" << std::endl;
		Bureaucrat	Isidor("Isidor", -7);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "trying to construct with grade 151" << std::endl;
		Bureaucrat	Isildur("Isildur", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}