/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:51:52 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 18:42:26 by mdesoeuv         ###   ########lyon.fr   */
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

typedef struct problem
{
	std::string	level;
	void	(Karen::*function_ptr)(void);
}	t_problem;

class Karen
{
	public :
	
		void	complain(std::string level);
		t_problem	problem_tab[MAX_PROBLEM];

	private :
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		parse_level(std::string level);
		
};

#endif
