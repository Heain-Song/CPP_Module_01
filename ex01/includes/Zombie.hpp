/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:25:35 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 16:04:38 by hesong           ###   ########.fr       */
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
		void	setName(std::string name);
		Zombie(void);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
