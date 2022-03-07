/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 08:48:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/07 12:03:58 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact constructed" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Contact destructed" << std::endl;
}

void	Contact::create(void)
{
	std::cout << "<Enter Contact Info>" << std::endl;
	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_nbr);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, secret);
}

void	Contact::print(void) const
{
	std::cout << "First name = " << first_name << std::endl;
	std::cout << "Last name = " << last_name << std::endl;
	std::cout << "Nickname = " << nickname << std::endl;
	std::cout << "Phone Number = " << phone_nbr << std::endl;
	std::cout << "Darkest secret = " << secret << std::endl;
}