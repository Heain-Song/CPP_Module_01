/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:27:26 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:12:57 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name, Weapon * weapon) : _name(name), _weapon(weapon) // Defining the Constructor Outside the Class
{
	if (this->_weapon->getType() == "")
		std::cout << "[Consttuctor] HumanB " << this->_name << " is called, but weapon type is empty " << std::endl;
	else
		std::cout << "[Constructor] HumanB " << this->_name << " is called with " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string const name) : _name(name), _weapon(NULL)
{
	std::cout << "[Constructor] HumanB " << this->_name << " is called without weapon" << std::endl;
}
HumanB::~HumanB(void)
{
	std::cout << "[Destructor] HumanB " << this->_name << " has been destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	if (this->_weapon->getType() == "" || !this->_weapon)
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
