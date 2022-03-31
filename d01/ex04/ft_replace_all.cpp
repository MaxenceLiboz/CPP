/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_all.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:05:15 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 15:04:18 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	ft_replace_all(std::string	*content, std::string to_replace,
			std::string replace_with) {
	
	std::ofstream	ofs;
	int				i_replace;

	if (to_replace.size() == 0 || replace_with.size() == 0)
	{
		std::cout << "The content to replace or/and the content replacing can't be null." << std::endl;
		exit (0);
	}
	i_replace = content->find(to_replace);
	while (i_replace != -1)
	{
		content->erase(i_replace, to_replace.size());
		content->insert(i_replace, replace_with);	
		i_replace = content->find(to_replace);
	}
}
