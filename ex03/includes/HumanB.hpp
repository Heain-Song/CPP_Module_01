/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:27:21 by hesong            #+#    #+#             */
/*   Updated: 2024/04/12 15:06:29 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanB
{
	private:
		std::string	const	_name;
		Weapon	*_weapon;

	public:
		HumanB(std::string const name, Weapon *weapon);
		HumanB(std::string const name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
