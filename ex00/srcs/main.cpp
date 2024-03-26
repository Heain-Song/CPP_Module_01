/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:02:17 by hesong            #+#    #+#             */
/*   Updated: 2024/03/26 16:54:41 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_heap;

	zombie_heap = newZombie("zombie_name");
	zombie_heap->announce();
	randomChump("stack");

	delete zombie_heap;
	return 0;
}
