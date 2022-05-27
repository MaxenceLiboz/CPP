/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:36:07 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/26 11:15:37by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

template<typename T, typename F>
void	iter(T table, int  size, F function)
{
	for (int i = 0; i < size; i++)
		function(table[i]);
}

template<typename T>
void	printElem(T const v1)
{
	std::cout << v1 << std::endl;
}

#endif