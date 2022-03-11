/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:26 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 16:54:26 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook 	my_book;
	std::string	command;
	int	finish = false;

	/* throws an exception when cin flag eofbit is set */
	
	std::cin.exceptions(std::ios_base::eofbit);

	try
	{
		while (finish == false)
		{
			std::cout << "\nInput your command : ";
			std::getline(std::cin, command);
			if (command.compare("ADD") == 0)
				my_book.add_contact();
			else if (command.compare("SEARCH") == 0)
				my_book.search_contact();
			else if (command.compare("EXIT") == 0)
				finish = true;
		}
	}
	catch (const std::istream::failure& e)
	{
		std::cout << "Bye bye" << std::endl;
	}
	return (0);
}
