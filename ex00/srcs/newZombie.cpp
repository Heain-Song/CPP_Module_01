/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:44:08 by hesong            #+#    #+#             */
/*   Updated: 2024/03/26 16:45:21 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string _name)
{
	/*It creates a zombie, name it, and return it
	so you can use it outside of the function scope.
	*/
	Zombie *ptr = new Zombie;

	return (ptr);
}
