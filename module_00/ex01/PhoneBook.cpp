/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:13:24 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/07 12:53:18 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	contact_nbr = 0;
	// std::cout << "PhoneBook constructed" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destructed" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	int		index;

	this->contact_nbr++;
	index = this->contact_nbr - 1;
	// std::cout << "index = " << index << std::endl;
	if (index == 7)
		this->contact_nbr = 0;
	tab[index].create();
}

void	PhoneBook::search_contact(void)
{
	int	i = 0;
	std::string	input;
	int	index;
	
	if (this->contact_nbr == 0)
	{
		std::cout << "No contact stored" << std::endl;
		return ;
	}
	while (i < this->contact_nbr)
	{
		std::cout << i << " | " << this->tab[i].first_name << " | " << this->tab[i].last_name << " | " << this->tab[i].nickname << std::endl;
		i++;
	}
	std::cout << "Input contact index number : ";
	std::getline(std::cin, input);
	try
	{
		index = std::stoi(input, NULL, 10);
	}
	catch(std::invalid_argument& e)
	{
		std::cout << "Invalid input, a number must be entered" << std::endl;
		return ;
	}
	if (index < 0 || index > this->contact_nbr - 1)
		std::cout << "This contact does not exist" << std::endl;
	else
		this->tab[index].print();
}

void	PhoneBook::display(void)
{
	std::cout << "First name = " << this->tab[0].first_name << std::endl;
}
