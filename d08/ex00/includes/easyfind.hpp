/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:12:22 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/31 13:26:51y mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T table, int needle)
{
	typename T::iterator it;
	
	it = std::find(table.begin(), table.end(), needle);
	if (it == table.end())
	{
		throw(std::runtime_error(std::string("Needle not found")));
	}
	return (it);
}

#endif