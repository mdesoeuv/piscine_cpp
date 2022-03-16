/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:41:01 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 12:18:27 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* 
** barycentric method :
** p = a + (b - a) * s + (c - a) * t
** The point p is inside the triangle if 0 <= s <= 1 and 0 <= t <= 1 and s + t <= 1
*/

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	s = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());
    Fixed	t = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed	d = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());

    if ((s < 0) != (t < 0) && s != 0 && t != 0)
        return (false);

	if (d == 0 || (d < 0) == (s + t <= 0))
		return (true);
	else
	    return (false);
}