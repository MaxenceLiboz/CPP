/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 14:58:40 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/25 09:43:07 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "AAnimal.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Use: ./poly [ARRAY_SIZE]" << END << std::endl;
		return (0);
	}
	unsigned int size = std::atoi(argv[1]);	
	if (size >= 2 && size <= 200)
	{
		AAnimal *animal[size];
		for (unsigned int i = 0; i < size / 2; i++)
			animal[i] = new Dog();
		for (unsigned int i = size / 2; i < size; i++)
			animal[i] = new Cat();		
		for (unsigned int i = 0; i < size; i++)
			delete animal[i];

		Cat *cat1 = new Cat();
		for (int i = 0; i < 100; i++)
			cat1->getBrain()->setIdea("Aled" + std::to_string(i), i);
		for (int i = 0; i < 5; i++)
			std::cout << cat1->getBrain()->getIdea(i) << std::endl;
		Cat *cat2 = new Cat(*cat1);
		Cat cat3;
		cat3 = *cat1;
		delete cat1;
		for (int i = 0; i < 5; i++)
			std::cout << cat2->getBrain()->getIdea(i) << std::endl;
		for (int i = 0; i < 5; i++)
			std::cout << cat3.getBrain()->getIdea(i) << std::endl;
		delete cat2;
	}
	else
		std::cout << RED << "ARRAY_SIZE between 2 and 200" << END << std::endl;
	return (0);
}