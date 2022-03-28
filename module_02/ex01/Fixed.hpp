/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:09:41 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 10:09:14 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed;

std::ostream	&operator<<(std::ostream &out, const Fixed &value);

class Fixed
{
	public :

		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& fixed);
		~Fixed(void);
		Fixed	&operator=(const Fixed &source);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private :	

		int					_raw_value;
		const static int	_fraction_bit_number;

};

#endif
