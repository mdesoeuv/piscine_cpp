/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:01:35 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/31 09:36:06 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
	std::string	type;
	int			number;

	Data(std::string Type = "default", int Number = 10)
	{
		type = Type;
		number = Number;
	}
};

uintptr_t serialize(Data* ptr)
{
	std::cout << "serialize" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	std::cout << "deserialize" << std::endl;
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data	*data_ptr = new Data();
	uintptr_t genericPtr;

	std::cout << "data.type : " << data_ptr->type << ", data.number : " << data_ptr->number << std::endl;

	genericPtr = serialize(data_ptr);
	data_ptr = deserialize(genericPtr);

	std::cout << "data.type : " << data_ptr->type << ", data.number : " << data_ptr->number << std::endl;
	
	delete data_ptr;
	return (0);
}