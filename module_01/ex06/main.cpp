/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:34:00 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 10:21:40 by mdesoeuv         ###   ########lyon.fr   */
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
	KarenHerself.filter(level_input);
	return (0);
}
