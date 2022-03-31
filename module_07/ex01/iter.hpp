/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:16:48 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 12:05:39 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdio>

template <typename T>
void	iter(T tab[], size_t size, void f(const T&))
{
	for (size_t i = 0; i < size; ++i)
	{
		f(tab[i]);
	}
}

#endif
