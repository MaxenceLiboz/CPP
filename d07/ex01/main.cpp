/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:36:28 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/26 14:09:22by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "main.hpp"

void	printElem_int(int const v1) { std::cout << v1 << ", "; }
void	printElem_char(char const v1) { std::cout << v1 << ", "; }
void	printElem_float(float const v1) { std::cout << v1 << ", "; }

int main()
{
	int		itable[4] = {1, 4, 2, 1};
	char	ctable[4] = {'b', 'a', 'd', 'c'};
	float	ftable[4] = {1.2f, 4.3f, -1.3f, 0.1f};

	std::cout << "print element from itable" << std::endl;	
	iter(itable, 4, printElem<int>);
	std::cout << std::endl;
	iter(itable, 4, printElem_int);
	std::cout << std::endl;
	std::cout << "print element from ctable" << std::endl;	
	iter(ctable, 4, printElem<char>);
	std::cout << std::endl;
	iter(ctable, 4, printElem_char);
	std::cout << std::endl;
	std::cout << "print element from ftable" << std::endl;	
	iter(ftable, 4, printElem<float>);
	std::cout << std::endl;
	iter(ftable, 4, printElem_float);
	std::cout << std::endl;
	return (0);
}