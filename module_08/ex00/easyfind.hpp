/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:37:57 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/30 10:43:26 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <class	T>
typename T::iterator	easyfind(T& intContainer, int toFind)
{
	typename T::iterator	result;
	
	result = std::find(intContainer.begin(), intContainer.end(), toFind);
	
	return (result);
}

#endif
