/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:26:52 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:31:15 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string("HI THIS IS BRAIN");
	
	std::string *stringPTR = &string;	
	std::string &stringREF = string;
	
	std::cout << "Memory addresses: " << std::endl;
	std::cout << "string: " << &string << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << "Values: " << std::endl;
	std::cout << "string: " << string << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return (0);
}