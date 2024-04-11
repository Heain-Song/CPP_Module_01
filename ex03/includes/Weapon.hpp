/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hesong <hesong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:25:04 by hesong            #+#    #+#             */
/*   Updated: 2024/04/11 21:46:46 by hesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon{

	private:
		std::string	_type;

	public:
		std::string const	&getType(void) const;
		void				setType(std::string const type);
		Weapon(std::string const type);
		~Weapon(void);
};

#endif
