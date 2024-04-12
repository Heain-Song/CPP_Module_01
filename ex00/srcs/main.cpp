/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:02:17 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 15:51:52 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie*	heap = newZombie("Heap Zombie");
	heap->announce();
	delete heap;

	randomChump("Stack RandomChump");

	return (0);
}
