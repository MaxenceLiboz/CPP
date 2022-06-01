/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:50:39 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/01 11:38:54 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
#define SPAN_CLASS_HPP

#include <vector>
#include <iostream>

class Span
{
	public:
		Span( Span const & var );
		Span( unsigned int n );
		~Span();
		
		Span & operator=( Span const & var );

		void			addNumber( int number );
		void			addRandomNumbers( unsigned int size );
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		std::vector<int>::const_iterator	begin() const;
		std::vector<int>::const_iterator	end() const;

	private:
		Span();

		std::vector<int>	_table;
		std::vector<int>	_sortedTable;
		unsigned int		_size;
		unsigned int		_maxSize;
	
};

#endif