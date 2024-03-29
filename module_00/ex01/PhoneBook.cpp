/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:13:24 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/14 13:36:15 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	contact_nbr = 0;
	std::cout << "PhoneBook constructed" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructed" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	int		index;

	contact_nbr++;
	index = (contact_nbr - 1) % 8;
	if (tab[index].create() == false)
	{
		contact_nbr--;
		if (contact_nbr < 0)
			contact_nbr = 0;
	}
}

void	PhoneBook::list_contacts(void) const
{
	int	i = 0;
	int	max;

	if (contact_nbr > 8)
		max = 8;
	else
		max = contact_nbr;
	while (i < max)
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << '|';
		tab[i].print_field(tab[i].getfirstname());
		std::cout << '|';
		tab[i].print_field(tab[i].getlastname());
		std::cout << '|';
		tab[i].print_field(tab[i].getnickname());
		std::cout << std::endl;       
		i++;
	}
}

void	PhoneBook::search_contact(void) const
{
	size_t	choice;
	
	if (this->contact_nbr == 0)
	{
		std::cout << "No contact stored" << std::endl;
		return ;
	}
	this->list_contacts();
	std::cout << "Input contact index number : ";
	while (!(std::cin >> choice) || std::cin.peek() != '\n' || choice > '9' )
	{
		if (std::cin.eof())
			return ;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input, enter a valid number : ";
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (choice < this->contact_nbr)
		this->tab[choice].print_contact();
	else
		std::cout << "That contact does not exist" << std::endl;
}
