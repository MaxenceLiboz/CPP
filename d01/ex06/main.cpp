/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:38:44 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 15:21:10 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

	if (argc != 2)
		std::cout << "./harlFileter [STRING]" << std::endl;
	else
		harl.complain(argv[1]);
	return (0);
}