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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	const WrongAnimal* wc = new WrongCat();
	const WrongAnimal* wa = new WrongAnimal();
	std::cout << std::endl;

	std::cout << wc->getType() << std::endl;
	wc->makeSound();
	wa->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wc;
	delete wa;

	return 0;
}
