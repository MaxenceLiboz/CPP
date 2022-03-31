/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:04:52 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 09:04:58 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	ft_read(std::string *content, char *filename) {
	
	std::string		tmp;
	std::ifstream	ifs;
	
	ifs.open(filename);
	if (ifs.fail()) {
		std::cout << "Can't open the file you entered" << std::endl;
		return (false);
	}
	while (std::getline(ifs, tmp)) {
		content->append(tmp);
		content->append("\n");
	}
	ifs.close();
	return (true);
}