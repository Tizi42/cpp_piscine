/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:40:44 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 22:40:45 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>
class Array {

public:
	Array(void);
	Array(unsigned int n);
	Array(Array const & rhs);
	~Array(void);

	Array & operator=(Array const & rhs);
	T &		operator[](size_t n) const;

	size_t	size() const;

private:
	T *		_tab;
	size_t	_size;
};

# include "Array.tpp"
#endif
