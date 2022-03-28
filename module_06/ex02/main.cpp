/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:04:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 14:37:56 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base	*generate(void)
{
	Base* result;

	srand(time(NULL));

	int	random = rand() % 3;
	
	switch (random)
	{
		case 0:
			std::cout << "sshhhhh : secretly generating an A" << std::endl;
			result = new A();
			break;
		case 1:
			std::cout << "sshhhhh : secretly generating a B" << std::endl;
			result = new B();
			break;
		case 2:
			std::cout << "sshhhhh : secretly generating a C" << std::endl;
			result = new C();
			break;
		default:
			std::cout << "randomization error" << std::endl;
			return (NULL);
	}
	return (result);	
}

/* dynamic_cast fail returns NULL */

void	identify(Base* p)
{
	A*	a;
	B*	b;
	C*	c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);

	if (a != NULL)
		std::cout << "A type pointer identified" << std::endl;
	else if (b != NULL)	
		std::cout << "B type pointer identified" << std::endl;
	else if (c != NULL)
		std::cout << "C type pointer identified" << std::endl;
}

/* dynamic_cast fail throws bad_cast */

void	identify(Base& p)
{
	try
	{
		A&	a = dynamic_cast<A&>(p);
		std::cout << "A type reference identified" << std::endl;
		(void)a;
	}
	catch (std::bad_cast& e)
	{}
	try
	{
		B&	b = dynamic_cast<B&>(p);
		std::cout << "B type reference identified" << std::endl;
		(void)b;
	}
	catch (std::bad_cast& e)
	{}
	try
	{
		C&	c = dynamic_cast<C&>(p);
		std::cout << "C type reference identified" << std::endl;
		(void)c;
	}
	catch (std::bad_cast& e)
	{}
	
}

int	main(void)
{
	Base*	basic = generate();
	
	std::cout << std::endl << "pointer identification:" << std::endl;
	
	identify(basic);	
	
	std::cout << std::endl << "pointer identification:" << std::endl;

	identify(*basic);

	std::cout << std::endl;
	
	delete basic;
	return (0);
}