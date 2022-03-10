/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:51:52 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 14:20:20 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define DEBUG 0
# define INFO 1
# define WARNING 2
# define ERROR 3

class Karen
{
	public :
	
		void	complain(std::string level);

	private :
	
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		parse_level(std::string level);
		
};

#endif
