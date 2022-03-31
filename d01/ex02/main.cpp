/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:26:52 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 08:58:59 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	std::string	string;
	if (argc == 1)
		string.assign("Default");
	else
		string.assign(argv[1]);
		
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