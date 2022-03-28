/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:00:27 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 10:30:10 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int	Fixed::_fraction_bit_number = 8;

Fixed::Fixed(void) : _raw_value(0)
{
}

Fixed::Fixed(const Fixed& fixed)
{
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
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	this->_raw_value = source._raw_value;
	return (*this);
}

bool	Fixed::operator>(const Fixed &rvalue) const
{
	std::cout << "custom > operator called" << std::endl;
	return (this->_raw_value > rvalue._raw_value);
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
	Fixed result = rvalue;
	result._raw_value += this->_raw_value;

	return (result);
}

Fixed	Fixed::operator-(const Fixed &rvalue) const
{
	Fixed result = rvalue;
	result._raw_value -= this->_raw_value;

	return (result);
}

Fixed	Fixed::operator*(const Fixed &rvalue) const
{
	long int x = this->_raw_value;
	x *= rvalue._raw_value;
	x >>= _fraction_bit_number;
	Fixed result;
	result._raw_value = x;
	return (result);
}

Fixed	Fixed::operator/(const Fixed &rvalue) const
{
	long int x = this->_raw_value << _fraction_bit_number;
	x /= rvalue._raw_value;
	Fixed result;
	result._raw_value = x;
	return (result);
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

/* prefix decrementation */

Fixed	Fixed::operator--(void)
{
	this->_raw_value -= 1;
	return (*this);
}

/* 
** postfix decrementation copy the source 
** then decrements the source and returns the copy
*/

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_raw_value -= 1;
	return (temp);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	// out	<< " overloaded";
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (_raw_value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	if (a._raw_value < b._raw_value)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	if (a._raw_value > b._raw_value)
		return (a);
	else
		return (b);
}

Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (Fixed(a));
	else
		return (Fixed(b));
}
