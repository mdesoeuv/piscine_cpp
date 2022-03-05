/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 08:48:59 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/05 09:10:38 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructed" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructed" << std::endl;
}

std::string Contact::getfirstname(void)
{
	return (this->first_name);
}

void	Contact::create(void)
{
	std::cout << "<Enter Contact Info>" << std::endl;
	std::cout << "First Name :";
	std::getline(std::cin, this->first_name);
}