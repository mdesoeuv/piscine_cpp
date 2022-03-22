/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:00:27 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/22 13:18:22 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fraction_bit_number = 8;

Fixed::Fixed(void) : _raw_value(0)
{
	std::cout << "Fixed constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Fixed Copy constructor called" << std::endl;
	this->_raw_value = fixed._raw_value;
}

Fixed::Fixed(const int n)
{
	_raw_value = (int)(n * (1 << _fraction_bit_number));
}

Fixed::Fixed(const float n)
{
	_raw_value = (int)roundf(n * (1 << _fraction_bit_number));
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed Destructor called" << std::endl;
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
	return (_raw_value / float(1 << _fraction_bit_number));
}

int		Fixed::toInt(void) const
{
	return ((int)roundf(_raw_value / float(1 << _fraction_bit_number)));
}
