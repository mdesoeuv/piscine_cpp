/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:22:16 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:47:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen	KarenHerself;

	std::cout << std::endl << "[DEBUG]" << std::endl;
	KarenHerself.complain("DEBUG");
	std::cout << std::endl << "[INFO]" << std::endl;
	KarenHerself.complain("INFO");
	std::cout << std::endl << "[WARNING]" << std::endl;
	KarenHerself.complain("WARNING");
	std::cout << std::endl << "[ERROR]" << std::endl;
	KarenHerself.complain("ERROR");
	std::cout << std::endl << "[OTHER]" << std::endl;
	KarenHerself.complain("Random things");

	return (0);
}