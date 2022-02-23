/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:26:00 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:26:01 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{

}

Span::Span(size_t size) : _N(size)
{

}

Span::Span(Span const & rhs)
{
	*this = rhs;
}

Span::~Span(void)
{

}

Span & Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_vec = rhs._vec;
	return (*this);
}

void	Span::addNumber(int num) {

	if (this->_N <= this->_vec.size())
		throw noEnoughSpace();
	this->_vec.push_back(num);
}

size_t	Span::shortestSpan(void)
{
	std::vector<int>::iterator	it;
	size_t	ret;
	size_t	tmp;

	if (this->_vec.empty() || this->_vec.size() == 1)
		throw noEnoughElements();

	std::sort(this->_vec.begin(), this->_vec.end());

	it = this->_vec.begin();
	ret = static_cast<long int>(*(it + 1)) - *it;
	for (; it + 1 != this->_vec.end(); it++)
	{
		tmp = static_cast<long int>(*(it + 1)) - *it;
		if (tmp < ret)
			ret = tmp;
	}
	return (ret);
}

size_t Span::longestSpan(void) const
{
	long int	max;
	long int	min;

	if (this->_vec.empty() || this->_vec.size() == 1)
		throw noEnoughElements();
	max = *std::max_element(this->_vec.begin(), this->_vec.end());
	min = *std::min_element(this->_vec.begin(), this->_vec.end());
	return (max - min);
}
