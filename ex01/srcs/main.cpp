/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:25:02 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:05:27 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie* zombies = zombieHorde(N, "zombieHorde");

	if (zombies != NULL)
	{
		for (int i = 0; i < N; i++)
			zombies[i].announce();
		delete [] zombies;
	}
	else
		std::cout << "There's no horde of Zombies!" << std::endl;
	return (0);
}


