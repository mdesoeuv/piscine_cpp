/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:34:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 12:32:09 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Karen		KarenHerself;

	if (argc != 2)
	{
		std::cout << "karenFilter: usage: <level>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	level_input(argv[1]);
	KarenHerself.setLevel(level_input);
	if (KarenHerself.getLevel() == MAX_PROBLEM + 1)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	KarenHerself.filter("DEBUG");
	KarenHerself.filter("INFO");
	KarenHerself.filter("WARNING");
	KarenHerself.filter("ERROR");
	return (0);
}
