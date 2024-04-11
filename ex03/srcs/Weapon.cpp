/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:25:17 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 21:19:21 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type)
{
	if (type != "")
	{
		std::cout << "Weapon constructor (type : " << this->_type << ")" << std::endl;
	}
	else
		std::cout << "Weapon constructor (type : empty)" << std::endl;
}
Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor (type : " << this->_type << ")" << std::endl;
}
std::string const & Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string const type)
{
	this->_type = type;
}
