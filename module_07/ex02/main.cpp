/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:45:38 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 14:16:32 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	TabInt(3);
	Array<std::string> TabStr(2);

	TabInt[0] = 42;
	TabInt[1] = 45;
	TabInt[2] = 40;

	for (size_t i = 0; i < TabInt.size; ++i)
	{
		std::cout << TabInt[i] << std::endl;
	}

	std::cout << std::endl;
	TabStr[0] = "bonjour";
	TabStr[1] = "au revoir";

	for (size_t i = 0; i < TabStr.size; ++i)
	{
		std::cout << TabStr[i] << std::endl;
	}
	
}