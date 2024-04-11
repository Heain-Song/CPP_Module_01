/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:27:26 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 22:02:08 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon)
{
	std::cout << "HumanB Constructor called" << std::endl;
}
HumanB::~HumanB(void)
{
	std::cout << "HumanB Destructor called" << std::endl;
}
void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	if (this->_weapon.getType() == "" || !this->_weapon)
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
