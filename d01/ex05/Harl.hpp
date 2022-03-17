/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:40:58 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 15:38:27 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
	public:
		Harl(){};
		~Harl(){};

		void	complain(std::string level);
		
	private:
		
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
		
		// void	(Harl::*f[4])(void);
		
		static	std::string	_table[4];
};
