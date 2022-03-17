/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:03:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 11:20:05 by mliboz           ###   ########.fr       */
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