/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:33:05 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/24 17:40:18 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	uintptr_t		uIntPtr;
	Data			data;
	Data			*dataAfter;

	data.x = 10;
	data.y = 11;
	data.name = "point1";


	std::cout << "name: " << data.name << ", x: " << data.x << ", y: " << data.y << std::endl;
	std::cout << "address: " << &data << std::endl;
	uIntPtr = serialize(&data);
	dataAfter = deserialize(uIntPtr);
	std::cout << "name: " << dataAfter->name << ", x: " << dataAfter->x << ", y: " << dataAfter->y << std::endl;
	std::cout << "address: " << dataAfter << std::endl;
	return (0);
}