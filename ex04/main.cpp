/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 22:04:42 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 23:26:32 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceString(std::string &line, const std::string &s1, const std::string &s2)
{
	size_t pos = 0;
	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
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

		std::ifstream inputFile(filename.c_str()); // 파일 입력
		std::ofstream outputFile(outputFilename.c_str()); // 파일 출력

		if (!inputFile.is_open())
		{
			std::cerr << "Error: can't open the input file" << std::endl;
			return (1);
		}
		if (!outputFile.is_open())
		{
			std::cerr << "Error: can't open the output file" << std::endl;
			return (1);
		}

		std::string line;
		while (std::getline(inputFile, line))
		{
			replaceString(line, s1, s2);
			outputFile << line << std::endl;
		}
		inputFile.close();
		outputFile.close();
		std::cout << "Completed: in " << outputFilename << std::endl;
		return (0);
	}
	else
	{
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	return (0);
}

