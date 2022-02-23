/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:19:59 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:20:01 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
# define EASY_FIND_H

# include <iostream>
# include <iterator>
# include <algorithm>
# include <exception>


class notFound : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("Value not found");
	}
};

template<template<typename, typename> class T>
typename T<int, std::allocator<int> >::iterator
	easyfind(T<int, std::allocator<int> > & container, int value)
{
	typename T<int, std::allocator<int> >::iterator	ret;
	ret = std::find(container.begin(), container.end(), value);
	if (ret == container.end())
		throw notFound();
	return (ret);
}

#endif
