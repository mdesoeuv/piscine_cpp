/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:45:47 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 15:09:15 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
	public:

		Array(void);
		Array(unsigned int n);
		Array(const Array& source);
		~Array(void);
		Array	&operator=(const Array& rhs);
		T& operator[](unsigned int index);
	
		unsigned int	size;
		
	private:

		T				*tab;
};

#include "Array.tpp"

#endif
