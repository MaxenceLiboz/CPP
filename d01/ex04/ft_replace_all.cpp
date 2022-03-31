/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_all.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:05:15 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 09:05:21 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_replace_all(std::string	*content, std::string to_replace,
			std::string replace_with) {
	
	std::ofstream	ofs;
	int				i_replace;

	i_replace = content->find(to_replace);
	while (i_replace != -1)
	{
		content->erase(i_replace, to_replace.size());
		content->insert(i_replace, replace_with);	
		i_replace = content->find(to_replace);
	}
}
