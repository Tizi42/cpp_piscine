/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:50:12 by tyuan             #+#    #+#             */
/*   Updated: 2022/01/30 11:50:14 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string	read_file_to_str(std::ifstream& ifs)
{
	std::string	str;

	ifs.seekg(0, ifs.end);
	int len = ifs.tellg();
	ifs.seekg(0, ifs.beg);
	char* buf = new char[len];
	ifs.read(buf, len);
	str = buf;
	delete [] buf;
	return (str);
}

void	copy_replace(std::string str, std::string filename,
						std::string s1, std::string s2)
{
	std::ofstream	ofs(filename);
	int				found;

	if (s1.empty())
	{
		ofs << str;
		return ;
	}
	found = str.find(s1);
	while (found != (int)std::string::npos)
	{
		ofs << str.substr(0, found) << s2;
		str = str.substr(found + s1.size());
		found = str.find(s1);
	}
	ofs << str;
	return ;
}

int main(int ac, char **av)
{
	std::string str;

	if (ac != 4)
	{
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream	ifs(av[1]);
	if (ifs.fail())
	{
		std::cout << "Invalid filename" << std::endl;
		return (1);
	}
	str = read_file_to_str(ifs);
	copy_replace(str, (std::string)av[1] + ".replace", av[2], av[3]);

	return (0);
}
