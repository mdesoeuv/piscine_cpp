/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:24:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 10:53:05 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cerr << "SedIsDead: usage : <filename> <string1> <string2>" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string		string1(argv[2]);
	std::string		string2(argv[3]);
	std::string		fileout_name(argv[1]);
	fileout_name.append(".replace");
	std::ifstream	input_file(argv[1], std::ios::in);
	if (!input_file)
	{
		std::cerr << "error: cannot open input file" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ofstream	output_file(fileout_name, std::ios::out | std::ios::trunc);
	if (!output_file)
	{
		std::cerr << "error: cannot create output file" << std::endl;
		return (EXIT_FAILURE);
	}
	

	input_file.close();
	output_file.close();
	return (EXIT_SUCCESS);
}
