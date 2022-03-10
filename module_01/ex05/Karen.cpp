/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:55:38 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 14:21:53 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "Karen is constructed and ready to complain" << std::endl;	
}

Karen::~Karen(void)
{
	std::cout << "Karen is tired and goes to sleep" << std::endl;
}

void	Karen::debug(void)
{
	std::cerr << "I love having extra bacon for my \
		7XL-double-cheese-triple-pickle-special-ketchup burger. \
		I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon \
		costs more money. You didn’t put \
		enough bacon in my burger ! If you did, \
		I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cerr << "I think I deserve to have some extra bacon for free. \
		I’ve been coming for years whereas you started working \
		here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cerr << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int		Karen::parse_level(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (DEBUG);
	if (level.compare("INFO") == 0)
		return ()
}

void	Karen::complain(std::string level)
{
	
}
