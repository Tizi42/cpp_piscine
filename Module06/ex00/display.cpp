/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:03:52 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 11:03:56 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

void	typeChar(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;
}

void	typeInt(int n)
{
	if (n > 31 && n < 127)
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else if (n >= 0 && n <= 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void	typeFloat(std::string str)
{
	float		f;
	std::string	sign;

	f = std::stof(str);
	if (f > std::numeric_limits<int>::max()
		|| f < std::numeric_limits<int>::min()
		|| str == "-inff" || str == "inff" || str == "+inff" || str ==  "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (f > 31 && f < 127)
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		else if (f >= 0 && f <= 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}
	sign = str[0] == '+' ? "+" : "";
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << sign << f << "f" <<std::endl;
	std::cout << "double: " << sign << static_cast<double>(f) <<std::endl;
}

void	typeDouble(std::string str)
{
	double		d;
	std::string	sign;

	d = std::stod(str);
	if (d > std::numeric_limits<int>::max()
		|| d < std::numeric_limits<int>::min()
		|| str == "-inf" || str == "inf" || str == "+inf" || str ==  "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		if (d > 31 && d < 127)
			std::cout << "char: '" << static_cast<char>(d) << "'"<< std::endl;
		else if (d >= 0 && d <= 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	}
	sign = str[0] == '+' ? "+" : "";
	std::cout << std::fixed << std::setprecision(1);
	if (str != "-inf" && str != "inf" && str != "+inf"
		&& (d > std::numeric_limits<float>::max() || d < std::numeric_limits<float>::lowest()))
		std::cout << "float: impossible" <<std::endl;
	else
		std::cout << "float: " << sign << static_cast<float>(d) << "f" <<std::endl;
	std::cout << "double: " << sign << d <<std::endl;
}
