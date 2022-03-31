/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:54:14 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 08:56:42 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	int			i;
	std::string	tmp;
	Zombie		*horde = new Zombie[N];
	
	i = 0;
	tmp.assign(name);
	while (i < N)
	{
		name = tmp + " " + std::to_string(i);
		horde[i++].setName(name);
	}
	return (horde);
}
