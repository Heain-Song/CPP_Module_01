/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:23:24 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:11:40 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

/**
 * HumanA
 * - reference to weapon, because A will always be armed. Reference can not be null.
 * - or pointer to weapon. But not ideal
 *
 * HumanB
 * - pointer, B may not always be unarmed. Pointer can be null.
 * - not set at creation
 */

int main()
{
	{
		Weapon club = Weapon("crude spiked club"); //weapon constructor called
		HumanA bob("Bob", club); // HumanA constructor called
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim"); //HumanB constructor called without weapon
		jim.setWeapon(club);
		jim.attack(); // Jim attacks with their crude spiked club
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
