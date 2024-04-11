/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:22:40 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 20:22:41 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of str : " << &str << std::endl;
	std::cout << "Memory address of stringPRT : " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
	std::cout << "Value in str : " << str << std::endl;
	std::cout << "Value in stringPRT : " << *stringPTR << std::endl;
	std::cout << "Value in stringREF : " << stringREF << std::endl;
}
