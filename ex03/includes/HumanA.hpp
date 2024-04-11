/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:25:35 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 21:50:54 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class	HumanA{
	private:
		Weapon const & _weapon;
		std::string const _name;

	public:
		HumanA(std::string const name, Weapon const & weapon);
		~HumanA(void);
		void	attack(void);
};

#endif
