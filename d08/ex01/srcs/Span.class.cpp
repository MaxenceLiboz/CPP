/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:23:30 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/01 11:53:40 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

Span::Span() : _size(0), _maxSize(0) {}

Span::Span( Span const & var ) 
{
	*this = var;
}

Span::Span( unsigned int n ) : _size(0), _maxSize(n) {}

Span::~Span(){}


Span & Span::operator=( Span const & var )
{
	this->_maxSize = var._maxSize;
	this->_size = var._size;
	return (*this);
}

void	Span::addNumber( int number )
{
	if (this->_size + 1 > this->_maxSize)
		throw(std::runtime_error("Span full"));
	this->_table.push_back(number);
	this->_size += 1;
	this->_sortedTable.push_back(number);
	std::sort(this->_sortedTable.begin(), this->_sortedTable.end());	
}

void	Span::addRandomNumbers( unsigned int size )
{
	if (this->_size + size > this->_maxSize)
		throw(std::runtime_error("Span full"));
	srand((unsigned) time (0));
	
	for (unsigned int i = 0; i < size; i++)
	{
		int	number = rand() % 2147483647;
		this->_table.push_back(number);
		this->_sortedTable.push_back(number);
		std::sort(this->_sortedTable.begin(), this->_sortedTable.end());
	}
	this->_size = size;
}

unsigned int	Span::longestSpan() const
{
	if (this->_size <= 1)
		throw (std::runtime_error("No span can be found"));
	int	min = *this->_sortedTable.begin();
	int	max = *(this->_sortedTable.end() -1);
	return (max - min);
}

unsigned int	Span::shortestSpan() const
{
	if (this->_size <= 1)
		throw (std::runtime_error("No span can be found"));

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
