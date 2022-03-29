/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:33:30 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 15:07:42 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main(void)
{
	int	a = 0;
	int	b = 42;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "swapping int :" << std::endl;
	swap(a, b);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl << std::endl;
	std::cout << "min = " << min(a, b) << std::endl;
	std::cout << "max = " << max(a, b) << std::endl;


	std::string	s1 = "bonjour";
	std::string	s2 = "au revoir";

	std::cout << "a : " << s1 << std::endl;
	std::cout << "b : " << s2 << std::endl;
	
	std::cout << "swapping strings :" << std::endl;
	swap(s1, s2);

	std::cout << "a : " << s1 << std::endl;
	std::cout << "b : " << s2 << std::endl;
	std::cout << "min = " << min(s1, s2) << std::endl;
	std::cout << "max = " << max(s1, s2) << std::endl;

	

	return (0);
}