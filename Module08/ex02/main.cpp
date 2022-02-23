/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:20 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:39:22 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void) {

	MutantStack<int>	mtStack;

	mtStack.push(4);
	mtStack.push(-56);
	mtStack.push(790);
	mtStack.push(29);
	mtStack.push(1314);
	mtStack.push(42);
	mtStack.push(0);

	std::cout << mtStack.top() << std::endl;
	mtStack.pop();
	std::cout << mtStack.top() << std::endl;

	MutantStack<int>::iterator	begin = mtStack.begin();
	MutantStack<int>::iterator	end = mtStack.end();

	begin++;
	begin--;

	while (begin != end)
	{
		std::cout << *begin;
		if (++begin == end)
			std::cout << std::endl;
		else
			std::cout << " ";
	}

	MutantStack<int>	copyStack(mtStack);

	MutantStack<int>::reverse_iterator	rbegin = copyStack.rbegin();
	MutantStack<int>::reverse_iterator	rend = copyStack.rend();

	rend++;
	rend--;

	while (rbegin != rend)
	{
		std::cout << *rbegin;
		if (++rbegin == rend)
			std::cout << std::endl;
		else
			std::cout << " ";
	}

	mtStack.pop();
	std::cout << mtStack.top() << std::endl;
	std::cout << copyStack.top() << std::endl;

	return 0;
}
