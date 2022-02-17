/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:04:56 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 11:04:58 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <iomanip>
# include <limits>  


int	isInt(std::string str);
int	isDouble(std::string str);
int	isFloat(std::string str);
int detectType(std::string str);

void	typeChar(char c);
void	typeInt(int n);
void	typeFloat(std::string str);
void	typeDouble(std::string str);

#endif
