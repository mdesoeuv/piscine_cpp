/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:43:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/29 13:14:51 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T&	min(T& a, T& b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T&	max(T& a, T& b)
{
	return (a > b ? a : b);
}

#endif
