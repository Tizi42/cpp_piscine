/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:29:44 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 23:29:49 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_T
# define ARRAY_T

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _tab(new T[0]()), _size(0) {

	//std::cout << "default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _tab(new T[n]()), _size(n) {

	//std::cout << "int constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(Array const & rhs) {

	//std::cout << "copy constructor called" << std::endl;
	this->_tab = NULL;
	*this = rhs;
}

template<typename T>
Array<T>::~Array(void) {

	//std::cout << "destructor called" << std::endl;
	delete [] this->_tab;
}

template<typename T>
Array<T> & Array<T>::operator=(Array const & rhs) {

	//std::cout << "copy assign called" << std::endl;
	if (this->_tab)
		delete [] this->_tab;
	this->_size = rhs.size();
	this->_tab = new T[this->_size];
	for (size_t i = 0; i < this->_size; i++)
	{
		this->_tab[i] = rhs[i];
	}
	return (*this);
}

template<typename T>
T &	Array<T>::operator[](size_t n) const {

	if (n >= this->_size)
		throw std::exception();
	return (this->_tab[n]);
}

template<typename T>
size_t	Array<T>::size() const {
	return (this->_size);
}

#endif
