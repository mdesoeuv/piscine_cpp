/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:54:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 11:35:22 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define CHAR 0
#define INT	1
#define FLOAT 2
#define DOUBLE 3

#include <iostream>
#include <sstream>

void	displayChar(const char input)
{
	std::cout << "Char : ";
	if (std::isprint(input))
		std::cout << input << std::endl;
	else
		std::cout << "not printable" << std::endl;	
}

void	displayInt(int input)
{
	std::cout << "Int : " << input << std::endl;
}

void	displayFloat(float input)
{
	std::cout << "Float " << input << "f" << std::endl;
}

void	displayDouble(double input)
{
	std::cout << "Double : " << input << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage: <value> as char, int, float or double" << std::endl;
		return (1);
	}

	double		conv;
	std::string	input(av[1]);

	if (input.size() == 1)
		conv = static_cast<char>(av[1][0]);
	else
		conv = std::atof(av[1]);
	
	char	c = static_cast<char>(conv);
	int		i = static_cast<int>(conv);
	float	f = static_cast<float>(conv);
	double	d = static_cast<double>(conv);

	displayChar(c);
	displayInt(i);
	displayFloat(f);
	displayDouble(d);

	return (0);
}