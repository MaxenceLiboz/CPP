/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 10:54:45 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/24 14:44:57 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class Converter
{
	public:
		Converter(Converter const & var);
		Converter(std::string literal);
		~Converter();

		Converter & operator=(Converter const & var);
		
		double		getLiteral() const;
		int			getType() const;

		bool		isNumber( std::string literal ) const;

		void		printChar() const;
		void		printInt() const;
		void		printFloat() const;
		void		printDouble() const;

		class NonComformLiteral : public std::exception
		{
			public:
				virtual const char * what() const throw ();
		};

	private:
		Converter();
		
		double 		_literal;
		tType		_type;
		
};

std::ostream & operator<<(std::ostream & o, Converter const & var);