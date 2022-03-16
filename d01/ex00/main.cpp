/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:42:19 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/16 14:02:39 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	newZombie(std::string name) {
	
	Zombie *newZombie = new Zombie(name);
	newZombie->announce();
	return (newZombie);
}

void	randomChump(std::string name) {
	Zombie newZombie(name);
	newZombie.announce();
}

int	main(void) {

	Zombie *zombie = newZombie("Theo");
	Zombie *zombie1 = newZombie("Wati-theo");
	delete zombie;
	randomChump("Anas");
	randomChump("Bibisch");
	delete zombie1;

	return (0);
}