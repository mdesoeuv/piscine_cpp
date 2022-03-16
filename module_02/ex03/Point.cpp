/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:07:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 12:00:18 by mdesoeuv         ###   ########lyon.fr   */
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

Point	&Point::operator=(const Point &source)
{
	(void)source;
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
