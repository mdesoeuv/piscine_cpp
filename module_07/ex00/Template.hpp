/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:43:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/28 17:14:46 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEM

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
