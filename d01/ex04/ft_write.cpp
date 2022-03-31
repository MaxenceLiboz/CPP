/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:05:37 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 09:05:44 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	ft_write(std::string content) {
	
	std::ofstream	ofs;
	
	ofs.open("outfile");
	if (ofs.fail()) {
		std::cout << "Can't open/create the file you entered" << std::endl;
		return (false);
	}
	ofs << content;
	ofs.close();
	return (true);
}
