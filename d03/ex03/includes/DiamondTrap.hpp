/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 08:26:41 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/18 13:14:49 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
	
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap & operator=( DiamondTrap const & rhs );
		using	ScavTrap::attack;
		void	whoAmI() const;

	private:
		DiamondTrap();
		std::string _name;
};

std::ostream &	operator<<( std::ostream & o, DiamondTrap const & rhs);

#endif