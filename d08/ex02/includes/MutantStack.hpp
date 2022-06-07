/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:21:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/07 11:38:42 by mliboz           ###   ########.fr       */
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
		MutantStack(){};
		MutantStack( MutantStack<T> const & var );
		~MutantStack(){};

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