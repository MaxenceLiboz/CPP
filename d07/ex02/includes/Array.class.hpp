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
		
		Array();
		Array( unsigned int n );
		Array( Array<T> & var );
		~Array();

		Array<T> &	operator=( Array<T> & var );
		T			operator[](unsigned int index) const;
		T &			operator[](unsigned int index);

		unsigned int	size() const;

		class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("\033[1;31mIndex out of bounds\e[0m");
				}
		};
	private:
		
		T			*_array;
		unsigned int _size;	
};


template<typename T>
Array<T>::Array() : _size(1)
{
	this->_array = new T();
}

template<typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	this->_array = new T[n];
	for (unsigned int i = 0; i < n; i++)
	{
		this->_array[i] = 0;
	}
}

template<typename T>
Array<T>::Array( Array<T> & var )
{
	this->_array = new T[var.size()];
	*this = var;
}

template<typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template<typename T>
Array<T> &  Array<T>::operator=( Array<T> & var )
{
	for (unsigned int i = 0; i < var.size() - 1; i++)
	{
		this->_array[i] = var[i];
	}
	this->_size = var.size();
	return (*this);
}

template<typename T>
T Array<T>::operator[](unsigned int index) const
{
	if (index >= this->size())
		throw (Array<T>::IndexOutOfBoundsException());
	return (this->_array[index]);
}

template<typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->size())
		throw (Array<T>::IndexOutOfBoundsException());
	return *(this->_array + index);
}

template<typename T>
unsigned int	Array<T>::size() const { return (this->_size); }

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> const & var)
{
	o << "List: [ ";
	for (unsigned int i = 0; i < var.size() - 2; i++)
	{
		o << var[i] << ", "; 
	}	
	o << var[var.size() - 1] << " ]" << std::endl;
	return (o);
}

#endif