/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:44:08 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 16:47:41 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	/*It creates a zombie, name it, and return it
	so you can use it outside of the function scope.
	 -> heap
	*/
	Zombie* newborn = new Zombie(name); // new() allocate memory for the instance and call the constructor at the same time.
	return (newborn);
}
