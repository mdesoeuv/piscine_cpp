/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:19:49 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/14 16:40:21 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a(-2.44f);
	Fixed b(a);
	Fixed c(-2);
	c = b;
	std::cout << a.toFloat() << std::endl;
	std::cout << b.toInt() << std::endl;
	std::cout << c.toFloat() << std::endl;
	std::cout << a << std::endl;
	return (0);
}
