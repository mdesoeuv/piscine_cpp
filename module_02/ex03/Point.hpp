/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:05:19 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/17 18:06:00 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:

		const Fixed	x;
		const Fixed	y;
		
		Point	&operator=(const Point &source);
	
	public:
		
		Point(void);
		Point(float x_float, float y_float);
		Point(const Point& source);
		~Point(void);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

};

#endif