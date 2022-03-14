/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:00:27 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/14 16:49:59 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fraction_bit_number = 8;

Fixed::Fixed(void) : _raw_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int n)
{
	_raw_value = (int)roundf(n / (pow(2, _fraction_bit_number)));
}

Fixed::Fixed(const float n)
{
	_raw_value = (int)(n * (pow(2, _fraction_bit_number)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_value = source.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	out	<< " overloaded";
	return (out);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_raw_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (_raw_value / (float)power());
}

int		Fixed::toInt(void) const
{
	return ((int)roundf(_raw_value / (float)power()));
}

int		Fixed::power(void) const
{
	int	i = 1;
	int	res = 1;

	while (i <= _fraction_bit_number)
	{
		res *= 2;
		i++;
	}
	return (res);
}