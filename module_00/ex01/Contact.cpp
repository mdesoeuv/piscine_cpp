/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 08:48:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/07 15:37:14 by mdesoeuv         ###   ########lyon.fr   */
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

bool	Contact::create(void)
{
	std::cout << "<Enter New Contact Infos>" << std::endl;
	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	if (first_name.empty())
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	if (last_name.empty())
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_nbr);
	if (phone_nbr.empty())
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	std::cout << "Darkest secret : ";
	std::getline(std::cin, secret);
	if (secret.empty())
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	return (true);
}

void	Contact::print_contact(void) const
{
	std::cout << "<Contact Infos>\n" << std::endl;
	std::cout << "First name = " << first_name << std::endl;
	std::cout << "Last name = " << last_name << std::endl;
	std::cout << "Nickname = " << nickname << std::endl;
	std::cout << "Phone Number = " << phone_nbr << std::endl;
	std::cout << "Darkest secret = " << secret << std::endl;
}

void	Contact::print_field(std::string str) const
{
	std::string	substr;
	size_t	i = 0;
	
	if (str.size() > 10)
	{
		substr = str.substr(0, 9);
		std::cout << substr << '.';
	}
	else
	{
		while (i < 10 - str.size())
		{
			std::cout << ' ';
			i++;
		}
		std::cout << str;
	}
}
