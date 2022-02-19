/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:19:48 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/15 22:19:50 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data * deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data a;
	Data *b;
	
	a.data = 42;
	std::cout << &a << std::endl;
	b = deserialize(serialize(&a));
	std::cout << b << std::endl;
	std::cout << a.data << std::endl;
	std::cout << b->data << std::endl;
}
