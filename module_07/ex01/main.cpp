/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:26:44 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 15:05:01 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <vector>

template <typename T>
void	displayElement(T t)
{
	std::cout << t << std::endl;
}

int	main(void)
{
	std::vector<int> TabInt;
	std::vector<float> TabFloat;
	std::vector<std::string>	TabStr;

	TabInt.push_back(42);
	TabInt.push_back(85);
	TabInt.push_back(2022);

	iter(TabInt, TabInt.size(), displayElement<int>);
	std::cout << std::endl;

	TabFloat.push_back(42.46);
	TabFloat.push_back(850000000000000000);
	TabFloat.push_back(2022.1);

	::iter(TabFloat, TabFloat.size(), displayElement<float>);
	std::cout << std::endl;
	
	TabStr.push_back("bonjour");
	TabStr.push_back("au revoir");
	
	iter(TabStr, TabStr.size(), displayElement<std::string>);

	return (0);
}