/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:26:16 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/24 14:47:13 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Converter.hpp"

int main (int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Use: ./cast [ LITERAL ]" << std::endl;
		return (0);
	}
	try
	{
		Converter converted(argv[1]);
		std::cout << converted;
	}
	catch(const Converter::NonComformLiteral& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}