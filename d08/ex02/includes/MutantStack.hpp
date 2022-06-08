/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:21:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/08 12:31:42 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack<T>::container_type::iterator iterator;
		
		MutantStack(){};
		MutantStack( MutantStack<T> const & var );
		~MutantStack(){};

		MutantStack<T>::iterator begin(){ return (this->c.begin()); }
		MutantStack<T>::iterator end(){ return (this->c.end()); }
		MutantStack<T> & operator=( MutantStack<T> const & var );
};

template<typename T>
MutantStack<T>::MutantStack( MutantStack<T> const & var)
{
	*this = var;
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack<T> const & var)
{
	*this = var;
	return *this;	
}

#endif