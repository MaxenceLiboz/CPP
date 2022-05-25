/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:14:45 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/25 10:35:45 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base * generate()
{
	int		randomize;

	std::srand((unsigned) time (NULL));
	randomize = std::rand() % 3;
	std::cout << randomize << std::endl;
	return (NULL);
}

int main(void)
{
	generate();	
}