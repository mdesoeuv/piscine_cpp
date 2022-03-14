/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:40 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/14 11:57:30 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	capitalized(const char* s)
{
	std::string result(s);
	
	for (size_t i = 0; i < result.length(); i++)
		result[i] = std::toupper(result[i]);
		
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		std::cout << capitalized(argv[i]);
	
	std::cout << std::endl;
	return (0);
}
