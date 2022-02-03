/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:51:06 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/01 10:51:08 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <fstream>
# include <cmath>

class	Fixed {

public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);

	int		operator>(Fixed const & rhs) const;
	int		operator<(Fixed const & rhs) const;
	int		operator>=(Fixed const & rhs) const;
	int 	operator<=(Fixed const & rhs) const;
	int		operator==(Fixed const & rhs) const;
	int		operator!=(Fixed const & rhs) const;

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed &	operator++(void);
	Fixed	operator++(int n);
	Fixed &	operator--(void);
	Fixed	operator--(int n);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed &			min(Fixed & fx1, Fixed & fx2);
	static Fixed const &	min(Fixed const & fx1, Fixed const & fx2);
	static Fixed &			max(Fixed & fx1, Fixed & fx2);
	static Fixed const &	max(Fixed const & fx1, Fixed const & fx2);

private:
	int					_fixedPoint;
	static int const	_fractional;
};

std::ostream &	operator<<(std::ostream & ofs, Fixed const & rhs);

#endif
