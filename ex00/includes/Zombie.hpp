/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:03:20 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 15:55:02 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie{

	private:
		std::string	name;

	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
