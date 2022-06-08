/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:23:30 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/08 13:11:13 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span() { this->_table.reserve(0); this->_sortedTable.reserve(0); }

Span::Span( Span const & var ) 
{
	*this = var;
}

Span::Span( unsigned int n )
{
	this->_table.reserve(n);
	this->_sortedTable.reserve(n);
}

Span::~Span(){}


Span & Span::operator=( Span const & var )
{
	this->_table.reserve(var._table.capacity());
	this->_sortedTable.reserve(var._table.capacity());
	return (*this);
}

void	Span::addNumber( int number )
{
	if (this->_table.size() + 1 > this->_table.capacity())
		throw(std::runtime_error("\e[0;31mSpan full\e[0m"));
	this->_table.push_back(number);
	this->_sortedTable.push_back(number);
	std::sort(this->_sortedTable.begin(), this->_sortedTable.end());	
}

void	Span::addNumbers( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}
void	Span::addRandomNumbers( unsigned int size )
{
	if (this->_table.size() + size > this->_table.capacity())
		throw(std::runtime_error("\e[0;31mSpan full\e[0m"));
	srand((unsigned) time (0));
	
	for (unsigned int i = 0; i < size; i++)
	{
		int	number = rand() % 2147483647;
		this->_table.push_back(number);
		this->_sortedTable.push_back(number);
		std::sort(this->_sortedTable.begin(), this->_sortedTable.end());
	}
}

unsigned int	Span::longestSpan() const
{
	if (this->_table.size() <= 1)
		throw (std::runtime_error("\e[0;31mNo span can be found\e[0m"));
	int	min = *this->_sortedTable.begin();
	int	max = *(this->_sortedTable.end() -1);
	return (max - min);
}

unsigned int	Span::shortestSpan() const
{
	if (this->_table.size() <= 1)
		throw (std::runtime_error("\e[0;31mNo span can be found\e[0m"));

	unsigned int	tmp = *(this->_sortedTable.begin() + 1) - *(this->_sortedTable.begin());
	for (std::vector<int>::const_iterator i = this->_sortedTable.begin(); i + 1 != this->_sortedTable.end(); i++)
	{
		if ((unsigned int)(*(i + 1) - *i) < tmp)
			tmp = *(i + 1) - *i;
		if (tmp == 0)
			return (tmp);
	}	
	return (tmp);
}


std::vector<int>::const_iterator	Span::begin() const { return this->_table.begin(); }
std::vector<int>::const_iterator	Span::end() const { return this->_table.end(); }
