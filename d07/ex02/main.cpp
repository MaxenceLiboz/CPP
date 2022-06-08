/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:15:57 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/08 16:42:12 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
 	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << "Testing if numbers and mirror saved the same values: " << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << "Numbers and mirror saved the same values!" << std::endl;
    try
    {
		std::cout << "Trying to access with invalid index: " << std::endl;
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "Trying to access with invalid index: " << std::endl;
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "Changing all the value with 42: " << std::endl;
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = 42;
	
	for (unsigned int i = 0; i < 10; i++)
		std::cout << numbers[i] << std::endl;

    delete [] mirror;
    return 0;
}