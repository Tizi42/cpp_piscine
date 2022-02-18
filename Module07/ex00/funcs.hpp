/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:34:25 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 20:34:27 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

# include <iostream>

template<typename T>
void swap(T & a, T & b) {

	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T const & max(T const & a, T const & b) {

	return (a > b ? a : b);
}

template<typename T>
T const & min(T const & a, T const & b) {

	return (a < b ? a : b);
}

template<typename T>
void	display(T & var1, T & var2) {
	std::cout << "  original: var1 = " << var1 << " var2 = " << var2 << std::endl;
	::swap<T>(var1, var2);
	std::cout << "after swap: var1 = " << var1 << " var2 = " << var2 << std::endl;
	std::cout << "       max: " << ::max<T>(var1, var2) << std::endl;
	std::cout << "       min: " << ::min<T>(var1, var2) << std::endl;
}

#endif
