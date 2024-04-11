/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:10:04 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 17:39:15 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "no_name";
}
Zombie::Zombie(std::string name)
{
	this->setName(name);
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been destroyed!" << std::endl;
}
void	Zombie::setName(std::string name)
{
	this->_name = name;
}
void	Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
