/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:14:18 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:24:01 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	private:
	
		std::string _name;
	public:
	
		Zombie(std::string name);
		Zombie(void);
		~Zombie();

		void	announce(void) const;
		void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif