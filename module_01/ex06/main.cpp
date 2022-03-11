/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:34:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 11:51:44 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	level_compute(std::string level)
{
	if (level == "DEBUG")
		return (DEBUG);
	if (level == "INFO")
		return (INFO);
	if (level == "WARNING")
		return (WARNING);
	if (level == "ERROR")
		return (ERROR);
	return (-1);
}

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
	KarenHerself.complain("DEBUG");
	KarenHerself.complain("INFO");
	KarenHerself.complain("WARNING");
	KarenHerself.complain("ERROR");
	KarenHerself.complain("Random things");

	return (0);
}
