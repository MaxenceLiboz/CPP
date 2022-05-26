/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:15:57 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/26 15:57:19 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Array.class.hpp"


// ADD EXCEPTION

int main ()
{
	Array<int> n1(10);
	Array<int> n2(n1);
	Array<int> n3 = n1;

	n1[0] = 10;

	std::cout << n1 << std::endl;
	std::cout << n2 << std::endl;
	std::cout << n3 << std::endl;

	return (0);
}