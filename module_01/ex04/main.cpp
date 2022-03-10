/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:24:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 10:57:29 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	read_file(std::string)


int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cerr << "SedIsDead: usage : <filename> <string1> <string2>" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string 	file_content;
	std::string		string1(argv[2]);
	std::string		string2(argv[3]);
	std::string		fileout_name(argv[1]);
	std::ifstream	input_file(argv[1], std::ios::in);

	if (!input_file)
	{
		std::cerr << "error: cannot open input file" << std::endl;
		return (EXIT_FAILURE);
	}
	fileout_name.append(".replace");
	std::ofstream	output_file(fileout_name, std::ios::out | std::ios::trunc);
	if (!output_file)
	{
		std::cerr << "error: cannot create output file" << std::endl;
		return (EXIT_FAILURE);
	}
	read_file(file_content, input_file, output_file);
	input_file.close();
	output_file.close();
	return (EXIT_SUCCESS);
}
