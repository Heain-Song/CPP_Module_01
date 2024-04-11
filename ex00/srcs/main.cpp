/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:02:17 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 16:49:18 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
	You have to determine in what case
	it’s better to allocate the zombies on the stack or heap.
	-> stack is for small, fast (local variables)
	-> heap is for big, flexible (new/delete)
	-> 차이점은 스택에 선언해서 announce만 하고 바로 소멸돼도 되는가
		 혹은 힙에 선언해서 재사용할 수 있게 반환하는가에 중점을 두고 이해하면 된다.
*/

int main(void)
{
	Zombie	stack("Stack Zombie"); // constructor 이용. Stack에 생성
	Zombie*	heap = newZombie("Heap Zombie"); //constructor 이용. heap에 생성

	stack.announce();
	randomChump("Random Zombie");
	heap->announce(); // pointer 썼기 때문에 -> 화살표 사용!
	delete heap;
	return (0);
}
















// #include "Zombie.hpp"

// int main(void)
// {
// 	Zombie *zombie_heap;

// 	zombie_heap = newZombie("zombie_name");
// 	zombie_heap->announce();
// 	randomChump("stack");

// 	delete zombie_heap;
// 	return 0;
// }
