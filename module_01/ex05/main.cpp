/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:22:16 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/11 10:24:52 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen	KarenHerself;

	KarenHerself.complain("DEBUG");
	KarenHerself.complain("INFO");
	KarenHerself.complain("WARNING");
	KarenHerself.complain("ERROR");
	KarenHerself.complain("Random things");

	return (0);
}