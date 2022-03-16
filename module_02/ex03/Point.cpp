/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:07:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 14:53:27 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(float x_float, float y_float) : x(x_float), y(y_float)
{
}

Point::Point(const Point& source) : x(source.x), y(source.y)
{
}

Point::~Point(void)
{
}

/* is it a good practice to trick-cast to get canonical class */

Point	&Point::operator=(const Point &source)
{
	(Fixed)this->x = source.getX();
	(Fixed)this->y = source.getY();

	return (*this);
}

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}
