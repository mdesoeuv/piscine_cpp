/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:43:58 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/30 10:42:00 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>			intTab;
	std::vector<int>::iterator	iterResult;
	int							toFind;

	intTab.push_back(1);
	intTab.push_back(2);
	intTab.push_back(3);
	intTab.push_back(4);
	intTab.push_back(5);

	toFind = 3;
	iterResult = easyfind(intTab, toFind);
	if (iterResult != intTab.end())
		std::cout << *iterResult << " is found and is at index " << std::distance(intTab.begin(), iterResult) << std::endl;
	else
		std::cout << toFind << " is not found :(" << std::endl;

	toFind = 6;
	iterResult = easyfind(intTab, toFind);
	if (iterResult != intTab.end())
		std::cout << *iterResult << " is found and is at index " << std::distance(intTab.begin(), iterResult) << std::endl;
	else
		std::cout << toFind << " not found" << std::endl;
	
	
	
	return (0);
}