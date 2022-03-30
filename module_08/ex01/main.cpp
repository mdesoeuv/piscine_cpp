/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:18:56 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/30 12:30:26 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main(void)
{
	Span	spanSingle(1);

	try
	{
		spanSingle.addNumber(1);
		spanSingle.addNumber(2);
		spanSingle.addNumber(3);
		spanSingle.addNumber(4);
		spanSingle.addNumber(5);
		spanSingle.addNumber(6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Shortest Span : " << spanSingle.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Longest Span : " << spanSingle.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	Span	spanFive(5);

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
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Shortest Span : " << spanFive.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Longest Span : " << spanFive.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}