/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:03:38 by tyuan             #+#    #+#             */
/*   Updated: 2022/02/17 11:03:39 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int	isInt(std::string str)
{
	int	i = 0;
	int len = str.size();

	if (str[0] == '-')
	{
		if (len == 1)
			return (0);
		i++;
	}
	for (; i < len && std::isdigit(str[i]); i++)
		;
	if (len != 0 && i == len)
		return (1);
	return (0);
}

int	isDouble(std::string str)
{
	size_t point = str.find('.');

	if (str == "-inf" || str == "inf" || str == "+inf" || str ==  "nan")
		return (1);
	if (point != std::string::npos && str[point + 1] && str[point + 1] != '-')
	{
		if (isInt(str.substr(0, point)) && isInt(str.substr(point + 1)))
			return (1);
	}
	return (0);
}

int isFloat(std::string str)
{
	if (str == "-inff" || str == "inff" || str == "+inff" || str ==  "nanf")
		return (1);
	if (str[str.size() - 1] == 'f' && isDouble(str.substr(0, str.size() - 1)))
		return (1);
	return (0);
}

int	detectType(std::string str)
{
	try
	{
		if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
			typeChar(str[1]);
		else if (isFloat(str))
			typeFloat(str);
		else if (isDouble(str))
			typeDouble(str);
		else if (isInt(str))
			typeInt(std::stoi(str));
		else
		{
			std::cout << "Error: type value non-valid" << std::endl;
			return (-1);
		}
	}
	catch (std::out_of_range)
	{
		std::cout << "Error: value out of range" << std::endl;
	}
	return (0);
}
