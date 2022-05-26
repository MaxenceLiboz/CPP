/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:21:38 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/26 10:31:34 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

template<typename T>
void	swap(T & v1, T & v2)
{
	T	tmp;

	tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template<typename T>
T		&min(T & v1, T & v2)
{
	return(v1 < v2 ? v1 : v2);
}

template<typename T>
T		&max(T &v1, T & v2)
{
	return(v1 > v2 ? v1 : v2);
}

#endif