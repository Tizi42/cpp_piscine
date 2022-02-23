/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:39:23 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/18 17:39:25 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_H
# define MUTANT_H

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(MutantStack const & rhs) : std::stack<T>(rhs) {}
	~MutantStack(void) {}

	MutantStack & operator=(MutantStack const & rhs) {
		this->c = rhs.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin(void) {
		return (this->c.begin());
	}

	const_iterator begin(void) const {
		return (this->c.begin());
	}

	iterator end(void) {
		return (this->c.end());
	}

	const_iterator end(void) const {
		return (this->c.end());
	}

	reverse_iterator rbegin(void) {
		return (this->c.rbegin());
	}

	const_reverse_iterator rbegin(void) const {
		return (this->c.rbegin());
	}

	reverse_iterator rend(void) {
		return (this->c.rend());
	}

	const_reverse_iterator rend(void) const {
		return (this->c.rend());
	}
};

#endif
