/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:19:49 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/25 09:33:01 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "subject tests :" << std::endl << std::endl;

	std::cout << "incrementation :" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "decrementation :" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl << std::endl;
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;

	std::cout << "\ncomplementary tests :" << std::endl;
	Fixed c(12);
	Fixed d(3.5f);
	std::cout << "c (" << c << ") + d (" << d << ") = " << c + d << std::endl;
	std::cout << "c (" << c << ") - d (" << d << ") = " << c - d << std::endl;
	std::cout << "c (" << c << ") * d (" << d << ") = " << c * d << std::endl;
	std::cout << "c (" << c << ") / d (" << d << ") = " << c / d << std::endl;
	
	std::cout << "\nc : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	if (c < d)
		std::cout << "c < d" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	if (c >= d)
		std::cout << "c >= d" << std::endl;
	if (c >= c)
		std::cout << "c >= c" << std::endl;
	if (c == d)
		std::cout << "c == d" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
	const Fixed &e = c;
	const Fixed &f = d;
	std::cout << "min(const c, const d) = " << Fixed::min(e, f) << std::endl;
	std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;
	std::cout << "max(const c, const d) = " << Fixed::max(e, f) << std::endl;
	return (0);
}
