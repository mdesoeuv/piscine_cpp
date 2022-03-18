/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:36:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/18 09:35:25 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "real str address is : " << &str << std::endl;
	std::cout << "address stored in stringPTR is : " << stringPTR << std::endl;
	std::cout << "address stored in stringREF is : " << &stringREF << std::endl;
	
	std::cout << "str value is : " << str << std::endl;
	std::cout << "value pointed by stringPTR is : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF is : " << stringREF << std::endl;
	return (0);
}