/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:50:39 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/08 13:10:29 by mliboz           ###   ########.fr       */
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
		void			addNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;

		std::vector<int>::const_iterator	begin() const;
		std::vector<int>::const_iterator	end() const;

	private:
		Span();

		std::vector<int>	_table;
		std::vector<int>	_sortedTable;
	
};

#endif