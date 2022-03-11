/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 08:48:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 14:13:22 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

const std::string&	Contact::getfirstname(void) const
{
	return (_first_name);
}

const std::string&	Contact::getlastname(void) const
{
	return (_last_name);
}

const std::string&	Contact::getnickname(void) const
{
	return (_nickname);
}


const std::string&	Contact::getphonenumber(void) const
{
	return (_phone_nbr);
}


const std::string&	Contact::getsecret(void) const
{
	return (_secret);
}

bool	Contact::initialize(std::string& attribute)
{
	std::getline(std::cin, attribute);
	if (attribute.empty() == true)
	{
		std::cout << "Error : empty field, contact has not been registered" << std::endl;
		return (false);
	}
	return (true);
}

bool	Contact::create(void)
{
	std::cout << "\n<Enter New Contact Infos>" << std::endl;
	std::cout << "First Name : ";
	if (initialize(_first_name) == false)
		return (false);
	std::cout << "Last Name : ";
	if (initialize(_last_name) == false)
		return (false);
	std::cout << "Nickname : ";
	if (initialize(_nickname) == false)
		return (false);
	std::cout << "Phone number : ";
	if (initialize(_phone_nbr) == false)
		return (false);
	std::cout << "Darkest secret : ";
	if (initialize(_secret) == false)
		return (false);
	return (true);
}

void	Contact::print_contact(void) const
{
	std::cout << "\n<Contact Infos>" << std::endl;
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone Number : " << _phone_nbr << std::endl;
	std::cout << "Darkest secret : " << _secret << std::endl;
}

void	Contact::print_field(std::string str) const
{
	if (str.size() > 10)
	{
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + '.';
	}
	else
	{
		std::cout << std::right << std::setw(10) << str;
	}
}
