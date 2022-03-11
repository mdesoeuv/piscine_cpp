/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:51:52 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 10:14:49 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3
# define MAX_PROBLEM 4

class Karen;

struct problem
{
	std::string	level;
	void	(Karen::* function_ptr)(void);
};

class Karen
{
	public :
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
		problem	problem_tab[MAX_PROBLEM];

	private :
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		
};


#endif
