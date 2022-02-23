/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:25:58 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:25:59 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{

public:
	Span(size_t size);
	Span(Span const & rhs);
	~Span(void);

	Span & operator=(Span const & rhs);

	void	addNumber(int num);

	template<class InputIterator>
	void	addNumber(InputIterator begin, InputIterator end);

	size_t	shortestSpan(void);
	size_t	longestSpan(void) const;

	class noEnoughSpace;
	class noEnoughElements;

private:
	Span(void);
	std::vector<int>	_vec;
	size_t				_N;
};

class Span::noEnoughSpace : public std::exception
{

public:
	virtual const char* what() const throw()
	{
		return ("No enough space");
	}
};

class Span::noEnoughElements : public std::exception
{

public:
	virtual const char* what() const throw()
	{
		return ("No enough element");
	}
};

template<class InputIterator>
void	Span::addNumber(InputIterator begin, InputIterator end)
{
	if (this->_N < this->_vec.size() + std::distance(begin, end))
		throw std::exception();
	this->_vec.insert(this->_vec.begin() + this->_vec.size(), begin, end);
}

#endif
