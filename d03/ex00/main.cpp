/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:19:20 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/05 10:57:46 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Max("Max");
	ClapTrap Theo("Theo");
	ClapTrap Copy = Theo;

	std::cout << Max << Theo << Copy << std::endl;
	Max.attack("Theo");
	Theo.takeDamage(10);
	std::cout << Theo << std::endl;
	Theo.beRepaired(10);
	std::cout << Theo << std::endl;
	
	Max.takeDamage(5);
	std::cout << Max << std::endl;
	Max.beRepaired(10);
	std::cout << Max << std::endl;

	Theo.takeDamage(5);
	std::cout << Theo << std::endl;

	for (int i = 0; i < 8; i++)
		Max.beRepaired(1);
	std::cout << Max;
	Max.beRepaired(1);
	std::cout << Max << std::endl;

	ClapTrap Copy2(Copy);
}