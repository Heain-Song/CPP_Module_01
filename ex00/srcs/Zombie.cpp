/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:10:04 by hesong            #+#    #+#             */
/*   Updated: 2024/03/26 16:41:31 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	announce(void)
{
	std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie(std::string _name)
{
	/*It creates a zombie, name it, and return it
	so you can use it outside of the function scope.
	*/
	Zombie *ptr = new Zombie;

	return (ptr);
}

void	randomChump( std::string _name)
{
	/*
	It creates a zombie, name it, and the zombie announces itself.
	*/
}
