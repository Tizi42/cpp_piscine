/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:50:43 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/08 16:50:44 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define N 4

int main(void)
{
	const Animal * 	j = new Dog();
	const Animal * 	i = new Cat();
	delete j;
	delete i;

	std::cout << std::endl;

	const Animal *	meta[N];
	for (int i = 0; i < N / 2; i++)
		meta[i] = new Dog();
	for (int i = N / 2; i < N; i++)
		meta[i] = new Cat();
	for (int i = 0; i < N; i++)
		delete meta[i];

	std::cout << std::endl;

	Dog 	dog1;
	Brain	b;
	b.ideas[0] = "hi";
	dog1.setBrain(b);

	Dog 	dog2(dog1);
	std::cout << "Dog1's ideas[0]: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "Dog2's ideas[0]: " << dog2.getBrain()->ideas[0] << std::endl;
	b.ideas[0] = "Hello";
	dog1.setBrain(b);
	std::cout << "Dog1's ideas[0]: " << dog1.getBrain()->ideas[0] << std::endl;
	std::cout << "Dog2's ideas[0]: " << dog2.getBrain()->ideas[0] << std::endl;


	return 0;
}
