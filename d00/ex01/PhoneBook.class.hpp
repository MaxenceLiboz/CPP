/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:52:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/16 12:46:23 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void){};
		void add_contact(void);
		void search_contact(void) const;

	private:
		int		_index;
		int		_size;
		Contact _contacts[8];

		void	_printHeader(void) const;
		void	_printElement(std::string element) const;
		void	_printLine(int index) const;
};

#endif