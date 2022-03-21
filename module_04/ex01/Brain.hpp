/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:00:38 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/21 10:53:43 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private :
	
		std::string ideas[100];

	public :

		Brain(void);
		Brain(const Brain& source);
		~Brain(void);
		Brain	&operator=(const Brain& source);
		void	displayIdea(size_t index) const;
		void	setIdea(const std::string& newIdea, size_t index);
		

};

#endif
