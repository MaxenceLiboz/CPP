/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:52:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/14 12:47:15 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "main.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		void add_contact(void);
		void search_contact(void) const;

	private:
		int		index;
		int		size;
		Contact contacts[8];

		void	printHeader(void) const;
		void	printElement(std::string element) const;
		void	printLine(int index) const;
};

#endif