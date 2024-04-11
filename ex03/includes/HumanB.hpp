/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:27:21 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 21:53:40 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanB{
	private:
		Weapon *_weapon;
		std::string	const _name;

	public:
		HumanB(std::string const name, Weapon const * weapon);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& weapon);
};

#endif
