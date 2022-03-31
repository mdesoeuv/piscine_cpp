/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 13:16:48 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 10:58:40 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdio>

template <typename T, typename F>
void	iter(T& tab, size_t size, F& f)
{
	for (size_t i = 0; i < size; ++i)
	{
		f(tab[i]);
	}
}

#endif
