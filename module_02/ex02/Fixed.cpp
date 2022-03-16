/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:00:27 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 10:28:25 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fraction_bit_number = 8;

Fixed::Fixed(void) : _raw_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_value = source.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rvalue) const
{
	std::cout << "custom > operator called" << std::endl;
	if (this->_raw_value > rvalue._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &rvalue) const
{
	std::cout << "custom < operator called" << std::endl;
	if (this->_raw_value < rvalue._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rvalue) const
{
	std::cout << "custom >= operator called" << std::endl;
	if (this->_raw_value >= rvalue._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rvalue) const
{
	std::cout << "custom <= operator called" << std::endl;
	if (this->_raw_value <= rvalue._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rvalue) const
{
	std::cout << "custom == operator called" << std::endl;
	if (this->_raw_value == rvalue._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rvalue) const
{
	std::cout << "custom != operator called" << std::endl;
	if (this->_raw_value != rvalue._raw_value)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &rvalue) const
{
	Fixed	temp(this->toFloat() + rvalue.toFloat());

	return (temp);
}

Fixed	Fixed::operator-(const Fixed &rvalue) const
{
	Fixed	temp(this->toFloat() - rvalue.toFloat());

	return (temp);
}

Fixed	Fixed::operator*(const Fixed &rvalue) const
{
	Fixed	temp(this->toFloat() * rvalue.toFloat());

	return (temp);
}

Fixed	Fixed::operator/(const Fixed &rvalue) const
{
	Fixed	temp(this->toFloat() / rvalue.toFloat());

	return (temp);
}

/* prefix incrementation */

Fixed	Fixed::operator++(void)
{
	this->_raw_value += 1;
	return (*this);
}

/* 
** postfix incrementation copy the source 
** then increments the source and returns the copy
*/

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_raw_value += 1;
	return (temp);
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
