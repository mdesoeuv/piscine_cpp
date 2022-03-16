/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:05:19 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/16 15:52:13 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifnef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:

		const Fixed	x;
		const Fixed	y;
		
	public:
		
		Point(void);
		Point(float x_float, float y_float);
		Point(const Point& source);
		~Point(void);
		Point	&operator=(const Point &source);
		Fixed	getX(void) const;
		Fixed	getY(void) const;

};

#endif