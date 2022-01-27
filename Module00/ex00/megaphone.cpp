#include <iostream>

int	ft_strlen(char *str)
{
	int i;

	for(i = 0; str && str[i]; i++)
		;
	return (i);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; j < ft_strlen(argv[i]); j++) //can we use .length ?
				std::cout << (char)ft_toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
