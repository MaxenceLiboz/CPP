/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:00:15 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:32:40 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		std::string	name;
		Weapon 		&weapon;

		void	attack() const;
};


#endif