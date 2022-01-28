#include "tools.hpp"

std::string	fit_column(std::string str)
{
	int			i;

	i = 0;
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

int	get_one_digit(void)
{
	std::string	input;

	getline(std::cin, input);
	while (input.size() != 1 || input[0] < '0' || input[0] > '9')
	{
		std::cout << "ERROR: please enter a single digit" << std::endl;
		getline(std::cin, input);
	}
	return (input[0] - '0');
}

void get_one_info(std::string info_required, std::string *buffer)
{
	*buffer = "";
	while (buffer->empty())
	{
		std::cout << "Please enter the " << info_required << ":" << std::endl;
		std::getline(std::cin, *buffer);
	}
	return ;
}
