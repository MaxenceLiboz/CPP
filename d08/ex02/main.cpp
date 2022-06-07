/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:29:47 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/07 11:36:41 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> stack;
	
	stack.push(10);
	stack.push(14);
	stack.push(15);
	std::cout << stack.top() << std::endl;
	std::cout << stack.top() << std::endl;
	return(0);
}