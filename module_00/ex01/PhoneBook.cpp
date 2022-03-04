/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:13:24 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/04 17:26:07 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructed" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructed" << std::endl;
}

void	PhoneBook::add_contact(void)
{
	int		index;
	Contact	new_contact;

	index = this->contact_nbr;
	if (index == 7)
		this->contact_nbr = 0;
	tab[index] = new_contact;
}

void	PhoneBook::display(void)
{
	std::cout << "First name = " << this->tab[0].getfirstname() << std::endl;
}
