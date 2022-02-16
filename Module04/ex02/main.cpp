/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:50:43 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/16 14:19:10 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	AAnimal *a = new Cat();
	std::cout << a->getType() << std::endl;
	delete a;

	std::cout << "! Uncomment the line below to get un error !" << std::endl;
	//AAnimal b;
	return 0;
}
