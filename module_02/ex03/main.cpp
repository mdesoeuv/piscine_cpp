/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:00:36 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 12:12:14 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	p1(-2, -2);
	Point	p2(0, 10);
	Point	p3(0, 10.2);

	std::cout << "a : " << a.getX() << "," << a.getY() << std::endl;
	std::cout << "b : " << b.getX() << "," << b.getY() << std::endl;
	std::cout << "c : " << c.getX() << "," << c.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "p1 : " << p1.getX() << "," << p1.getY() << std::endl;
	std::cout << "p2 : " << p2.getX() << "," << p2.getY() << std::endl;
	std::cout << "p3 : " << p3.getX() << "," << p3.getY() << std::endl;
	std::cout << std::endl;
	
	if (bsp(a, b, c, p1) == true)
		std::cout << "p1 is in triangle a,b,c" << std::endl;
	else
		std::cout << "p1 is not in triangle a,b,c" << std::endl;
	if (bsp(a, b, c, p2) == true)
		std::cout << "p2 is in triangle a,b,c" << std::endl;
	else
		std::cout << "p2 is not in triangle a,b,c" << std::endl;
	if (bsp(a, b, c, p3) == true)
		std::cout << "p3 is in triangle a,b,c" << std::endl;
	else
		std::cout << "p3 is not in triangle a,b,c" << std::endl;
	return (0);
}
