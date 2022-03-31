/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:42:19 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:27:16 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie *zombie = newZombie("Theo");
	zombie->announce();
	Zombie *zombie1 = newZombie("Wati-theo");
	zombie1->announce();
	delete zombie;
	randomChump("Anas");
	randomChump("Bibisch");
	delete zombie1;

	return (0);
}