/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesoeuv <mdesoeuv@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:24:34 by mdesoeuv          #+#    #+#             */
/*   Updated: 2022/03/10 13:48:25 by mdesoeuv         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	read_file(std::string& file_content, std::ifstream& input_file)
{
	std::string	line;

	while (getline(input_file, line, '\n'))
	{
		file_content.append(line);
		if (input_file.eof() == false)
			file_content.append("\n");
	}
}

void	replace_string(std::string& file_content, std::string string1, std::string string2)
{
	size_t	pos;

	pos = file_content.find(string1, 0);
	while (pos != file_content.npos)
	{
		file_content.erase(pos, string1.length());
		file_content.insert(pos, string2);
		pos = file_content.find(string1, 0);
	}
}

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
		input_file.close();
		return (EXIT_FAILURE);
	}
	read_file(file_content, input_file);
	if (string1.empty() == false)
		replace_string(file_content, string1, string2);
	output_file << file_content;
	input_file.close();
	output_file.close();
	return (EXIT_SUCCESS);
}
