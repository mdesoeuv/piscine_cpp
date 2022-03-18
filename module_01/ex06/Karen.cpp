/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:55:38 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 10:18:37 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) : _selected_level(0)
{
	problem_tab[DEBUG].level = "DEBUG";
	problem_tab[DEBUG].function_ptr = &Karen::debug;
	problem_tab[INFO].level = "INFO";
	problem_tab[INFO].function_ptr = &Karen::info;
	problem_tab[WARNING].level = "WARNING";
	problem_tab[WARNING].function_ptr = &Karen::warning;
	problem_tab[ERROR].level = "ERROR";
	problem_tab[ERROR].function_ptr = &Karen::error;
	std::cout << "Karen is constructed and ready to complain" << std::endl;	
}

Karen::~Karen(void)
{
	std::cout << "Karen is tired and goes to sleep" << std::endl;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG LEVEL ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO LEVEL ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING LEVEL ]" << std::endl;
	std::cerr << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR LEVEL ]" << std::endl;
	std::cerr << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

int	Karen::level_compute(std::string level)
{
	int	i = 0;

	while (i < MAX_PROBLEM)
	{
		if (level == problem_tab[i].level)
			return (i);
		i++;
	}
	return (MAX_PROBLEM + 1);
}

void	Karen::setLevel(std::string level)
{
	_selected_level = level_compute(level);
}

int		Karen::getLevel(void)
{
	return (_selected_level);
}

void	Karen::filter(std::string level)
{
	this->setLevel(level);
	switch (getLevel())
	{
		case DEBUG:
			complain(this->problem_tab[DEBUG].level);
			complain(this->problem_tab[INFO].level);
			complain(this->problem_tab[WARNING].level);
			complain(this->problem_tab[ERROR].level);
			break;

		case INFO:	
			complain(this->problem_tab[INFO].level);
			complain(this->problem_tab[WARNING].level);
			complain(this->problem_tab[ERROR].level);
			break;

		case WARNING:
			complain(this->problem_tab[WARNING].level);
			complain(this->problem_tab[ERROR].level);
			break;

		case ERROR:
			complain(this->problem_tab[ERROR].level);
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::complain(std::string level)
{
	int	i = 0;

	while (i < MAX_PROBLEM)
	{
		if (level == problem_tab[i].level)
		{
			(this->*problem_tab[i].function_ptr)();
			return ;
		}
		i++;
	}
}
