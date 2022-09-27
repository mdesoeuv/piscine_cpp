/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:45:47 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/09/27 17:43:56 by mdesoeuv         ###   ########lyon.fr   */
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
		T& operator[](size_t index);
		const T& operator[](size_t index) const;
		size_t	size(void) const;

		struct IndexErrorException : public std::exception
		{
			const char *what(void) const throw ();
		};
		
		
	private:

		T		*tab;
		size_t	_size;
};

#include "Array.tpp"

#endif
