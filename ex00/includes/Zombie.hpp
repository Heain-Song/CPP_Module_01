/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:03:20 by hesong            #+#    #+#             */
/*   Updated: 2024/03/26 16:56:43 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie{

	private:
	std::string	_name;

	public:
	void	announce(void);
	void	set_name(std::string	name);
};

Zombie* newZombie(std::string name);
void	randomeChump(std::string name);
