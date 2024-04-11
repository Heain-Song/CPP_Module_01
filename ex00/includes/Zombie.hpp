/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:03:20 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 19:55:25 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie{

	private:
		std::string	_name;

	public:
		void	announce(void);
		void	setName(std::string name);
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
