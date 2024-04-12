/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:25:17 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:13:28 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type)
{
	if (_type == "")
		std::cout << "[Constructor] Weapon created with empty type" << std::endl;
	else
		std::cout << "[Constructor] Weapon created with type " << this->_type << std::endl;
}
Weapon::~Weapon(void)
{
	std::cout << "[Destructor] Weapon with type " << this->_type << " has been destroyed" << std::endl;
}
std::string const &	Weapon::getType(void) const //constant function declaration
{
	return (this->_type);
}

void	Weapon::setType(std::string const type)
{
	this->_type = type;
}
