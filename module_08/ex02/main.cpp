/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:30:25 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 18:52:02 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	{
		std::cout << "Test using MutantStack:" << std::endl << std::endl;
		MutantStack<int> myStack;

		std::cout << std::endl << "MutantStack size : " <<  myStack.size() << std::endl << std::endl;

		for (int i = 0; i < 10; ++i)
			myStack.push(i);

		for (MutantStack<int>::iterator it = myStack.begin(); it < myStack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
		
		std::cout << std::endl << "MutantStack size : " <<  myStack.size() << std::endl << std::endl;

		MutantStack<int>::iterator	iter = myStack.begin();

		std::cout << *(++iter) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(iter++) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(--iter) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(iter--) << std::endl;
		std::cout << *(iter) << std::endl;
		
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "Test using std::list :" << std::endl << std::endl;

		std::list<int> myStack;

		std::cout << std::endl << "List size : " <<  myStack.size() << std::endl << std::endl;

		for (int i = 0; i < 10; ++i)
			myStack.push_back(i);

		
		for (std::list<int>::iterator it = myStack.begin(); it != myStack.end(); ++it)
		{
			std::cout << *it << std::endl;
		}
		
		std::cout << std::endl << "List size : " <<  myStack.size() << std::endl << std::endl;

		std::list<int>::iterator	iter = myStack.begin();

		std::cout << *(++iter) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(iter++) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(--iter) << std::endl;
		std::cout << *(iter) << std::endl;
		std::cout << *(iter--) << std::endl;
		std::cout << *(iter) << std::endl;
		
		std::cout << std::endl;
	}
	return (0);
}