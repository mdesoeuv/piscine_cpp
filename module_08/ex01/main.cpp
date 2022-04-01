/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:18:56 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/04/01 09:57:43 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span	spanSingle(1);

	std::cout << std::endl << "trying to add more numbers than Span size :" << std::endl;
	try
	{
		std::cout << "Span size : " << spanSingle.size() << std::endl;
		spanSingle.addNumber(1);
		spanSingle.addNumber(2);
		spanSingle.addNumber(3);
		spanSingle.addNumber(4);
		spanSingle.addNumber(5);
		spanSingle.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "trying to call Shortest and Longest Span function without enough elements :"  << std::endl;
	try
	{
		std::cout << std::endl << "Shortest Span : " << spanSingle.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl << "Longest Span : " << spanSingle.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	Span	spanFive(5);

	std::cout << std::endl << "calling Shortest and Longest Span functions with proper requirements :" << std::endl;
	try
	{
		spanFive.addNumber(0);
		spanFive.addNumber(10);
		spanFive.addNumber(11);
		spanFive.addNumber(15);
		spanFive.addNumber(20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl << "Shortest Span : " << spanFive.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << std::endl << "Longest Span : " << spanFive.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	Span	spanThousands(100000);
	std::vector<int> range;
	
	for (size_t i = 0; i < 100000 + 1; ++i)
	{
		range.push_back(42);
	}

	std::cout << std::endl << "trying to add a range of max_size + 1 :" << std::endl;
	try
	{
		spanThousands.addRange(range.begin(), range.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
	std::cout << std::endl << "Displaying first 10 elements :" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << spanThousands[i] << std::endl;
	}

	std::cout << "Span size : " << spanThousands.size() << std::endl;

	return (0);
}