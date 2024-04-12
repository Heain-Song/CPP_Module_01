/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:25:52 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 15:21:58 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const name, Weapon const & weapon) : _weapon(weapon), _name(name) // Defining the Constructor Outside the Class
{
	if (this->_weapon.getType() == "")
		std::cout << "Consttuctor: HumanA " << this->_name << " is called without weapon" << std::endl;
	else
		std::cout << "Constructor: HumanA " << this->_name << " is called with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor: HumanA " << this->_name << " has been destroyed" << std::endl;
}
void	HumanA::attack(void)
{
	if (this->_weapon.getType() == "")
		std::cout << this->_name << " has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
