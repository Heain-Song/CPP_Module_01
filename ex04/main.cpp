/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:04:42 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 12:46:04 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceString(std::string &buffer, const std::string &s1, const std::string &s2)
{
	size_t pos = 0;
	while ((pos = buffer.find(s1, pos)) != std::string::npos) // if found
	{
		buffer = buffer.substr(0, pos) + s2 + buffer.substr(pos + s1.length());
		pos += s2.length();
	}
}
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string	filename = argv[1];
		std::string	s1 = argv[2];
		std::string s2 = argv[3];
		std::string outputFilename = filename + ".replace";

		std::ifstream inputFile(filename.c_str()); // open the file to read. c_str() to convert the string to an array of characters
		std::ofstream outputFile(outputFilename.c_str()); // open the file to write

		if (!inputFile.is_open())
		{
			std::cout << "Error: can't open the input file" << std::endl;
			return (1);
		}
		if (!outputFile.is_open())
		{
			std::cout << "Error: can't open the output file" << std::endl;
			return (1);
		}

		std::string buffer;
		while (std::getline(inputFile, buffer)) // Read each line from the file
		{
			replaceString(buffer, s1, s2);
			outputFile << buffer << std::endl;
		}
		inputFile.close();
		outputFile.close();
		std::cout << "Success: Replacement comepleted" << std::endl;
		return (0);
	}
	else
		std::cout << "Error: Invalid number of arguments" << std::endl;
	return (0);
}

