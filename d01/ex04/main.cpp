/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:03:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 09:05:37 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(int argc, char **argv) {
	
	std::string		content;
	
	if (argc != 4) {
		std::cout << "Use: ./main [filename] [string] [replacement]" << std::endl;
		return (0);
	}
	if (ft_read(&content, argv[1]) == false)
		return (0);
	ft_replace_all(&content, argv[2], argv[3]);
	if (ft_write(content) == false)
		return (0);
	return (0);
}