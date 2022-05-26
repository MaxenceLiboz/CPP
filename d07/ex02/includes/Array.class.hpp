/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:13:10 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/26 15:42:51y mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		
		Array() : _size(1) {this->_array = new T();};

		Array( unsigned int n ) : _size(n)
		{
			this->_array = new T[n];
			for (unsigned int i = 0; i < n; i++)
			{
				this->_array[i] = 0;
			}
		}

		Array( Array<T> const & var )
		{
			this->_array = new T[var.length()];
			*this = var;
		}

		~Array() { delete [] this->_array; }

		Array<T> & operator=( Array<T> const & var )
		{
			for (unsigned int i = 0; i < var.length() - 1; i++)
			{
				this->_array[i] = var[i];
			}
			this->_size = var.length();
			return (*this);
		}
		
		T & operator[](int index) const { return *(this->_array + index); }

		unsigned int	length() const { return (this->_size); }	
	private:
		
		T			*_array;
		unsigned int _size;	
};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> & var)
{
	o << "List: [ ";
	for (unsigned int i = 0; i < var.length() - 2; i++)
	{
		o << var[i] << ", "; 
	}	
	o << var[var.length() - 1] << " ]" << std::endl;
	return (o);
}

#endif