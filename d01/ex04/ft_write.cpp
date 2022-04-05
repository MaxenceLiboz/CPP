/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:05:37 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/05 10:34:09 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	ft_write(std::string content, std::string infile_name) {
	
	std::ofstream	ofs;
	
	infile_name += ".replace";
	ofs.open(infile_name);
	if (ofs.fail()) {
		std::cout << "Can't open/create the file you entered" << std::endl;
		return (false);
	}
	ofs << content;
	ofs.close();
	return (true);
}
