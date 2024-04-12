/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:22:40 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:16:47 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	stringORG = "HI THIS IS BRAIN";
	std::string	*stringPTR = &stringORG;
	std::string &stringREF = stringORG;

	std::cout << "Memory address of stringORG : " << &stringORG << std::endl;
	std::cout << "Memory address of stringPRT : " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
	std::cout << "Value in stringORG : " << stringORG << std::endl;
	std::cout << "Value in stringPRT : " << *stringPTR << std::endl;
	std::cout << "Value in stringREF : " << stringREF << std::endl;
}
