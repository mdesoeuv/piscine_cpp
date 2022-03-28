/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:54:45 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 11:59:46 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define CHAR 0
#define INT	1
#define FLOAT 2
#define DOUBLE 3

#include <iostream>
#include <sstream>

void	displayChar(const char c, std::string input)
{
	std::cout << "Char : ";
	if (input.size() != 1)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "not printable" << std::endl;	
}

void	displayInt(int i, std::string input)
{
	std::cout << "Int : ";

	if (i == INT_MIN && input != "-2147483648")
		std::cout << "impossible" << std::endl;
	else
		std::cout << i << std::endl;
}

void	displayFloat(float f)
{
	std::cout << "Float " << f << "f" << std::endl;
}

void	displayDouble(double d)
{
	std::cout << "Double : " << d << std::endl;
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

	if (conv == 0 && input != "0" && input != "0.0" && input != "0f" && input != "0.0f")
	{
		std::cout << "your input makes no sense" << std::endl;
		return (1);
	}
	
	char	c = static_cast<char>(conv);
	int		i = static_cast<int>(conv);
	float	f = static_cast<float>(conv);
	double	d = static_cast<double>(conv);

	displayChar(c, input);
	displayInt(i, input);
	displayFloat(f);
	displayDouble(d);

	return (0);
}