/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:57:15 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 09:09:53 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	private:
		std::string _type;

	public:
		Weapon(std::string weapon);
		Weapon(){};
		~Weapon(){};

		std::string getType(void) const;
		void setType(std::string weapon);
};

#endif