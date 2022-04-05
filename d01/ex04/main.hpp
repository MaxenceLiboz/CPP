/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:05:33 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/05 10:33:55 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>

bool	ft_read(std::string *content, char *filename);
void	ft_replace_all(std::string	*content, std::string to_replace,
			std::string replace_with);
bool	ft_write(std::string content, std::string infile_name);

#endif