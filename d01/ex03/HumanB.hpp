/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:00:15 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:32:47 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string name);
		~HumanB();

		std::string	name;
		Weapon 		*weapon;

		void	attack(void) const;
		void	setWeapon(Weapon &weapon);
		
	private:
};


#endif