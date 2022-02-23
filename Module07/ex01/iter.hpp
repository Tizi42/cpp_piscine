/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:29:43 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 21:29:44 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef $B
# define $B

# include <iostream>

template<typename T>
void iter(T tab[], size_t size, void (*f)(T &)) {

	for (size_t i = 0; i < size; i++) {
		f(tab[i]);
	}
}

template<typename T>
void printArray(T & a) {
	std::cout << a << std::endl;
}

#endif
