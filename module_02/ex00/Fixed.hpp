/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:09:41 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 17:14:07 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public :

		Fixed(void);
		Fixed(Fixed& fixed);
		~Fixed(void);
		Fixed	&operator=(const Fixed &);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private :	

		int					_raw_value;
		const static int	_fraction_bit_number;

};

#endif
