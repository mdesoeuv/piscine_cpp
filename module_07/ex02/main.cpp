/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:45:38 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 15:27:17 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	TabInt(3);

	TabInt[0] = 42;
	TabInt[1] = 45;
	TabInt[2] = 40;

	std::cout << std::endl << "Displaying TabInt :" << std::endl;
	for (size_t i = 0; i < TabInt.size(); ++i)
	{
		std::cout << TabInt[i] << std::endl;
	}
	std::cout << std::endl;

	Array<std::string> TabStr(2);
	TabStr[0] = "bonjour";
	TabStr[1] = "au revoir";
	Array<std::string>	TabCopy(TabStr);

	std::cout << std::endl << "Tab 1 :" << std::endl;
	for (size_t i = 0; i < TabStr.size(); ++i)
	{
		std::cout << TabStr[i] << std::endl;
	}
	std::cout << std::endl << "Tab 2 :" << std::endl;
	for (size_t i = 0; i < TabCopy.size(); ++i)
	{
		std::cout << TabCopy[i] << std::endl;
	}

	std::cout << std::endl << "changing value in first Tab :" << std::endl;
	TabStr[0] = "coucou";
		std::cout << std::endl << "Tab 1 :" << std::endl;
	for (size_t i = 0; i < TabStr.size(); ++i)
	{
		std::cout << TabStr[i] << std::endl;
	}
	std::cout << std::endl << "Tab 2 :" << std::endl;
	for (size_t i = 0; i < TabCopy.size(); ++i)
	{
		std::cout << TabCopy[i] << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << "trying to access index -2" << std::endl;
		std::cout << TabStr[-2] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		std::cout << "trying to access index over max size" << std::endl;
		std::cout << TabStr[TabStr.size() + 1] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
}