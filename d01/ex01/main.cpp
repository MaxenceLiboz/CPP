/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:42:19 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 08:56:44 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv) {
	int			i;
	int			N;
	std::string	name;

	N = 5;
	name.assign("THEO");
	if (argc == 2)
		N = atoi(argv[1]);
	else if (argc == 3) {
		N = atoi(argv[1]);
		name.assign(argv[2]);
	}
	
	Zombie	*horde = zombieHorde(N, name);

	i = 0;
	while (i < N)
		horde[i++].announce();
	delete [] horde;
	return (0);
}