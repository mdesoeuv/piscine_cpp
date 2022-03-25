/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:54:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 14:00:57 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define CHAR 0
#define INT	1
#define FLOAT 2
#define DOUBLE 3

#include <iostream>
#include <sstream>

int	detect(const std::string& input)
{
	
	
	return ()
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage: <value> as char, int, float or double" << std::endl;
		return (1);
	}
	
	std::string	input(av[1]);
	


	return (0);
}