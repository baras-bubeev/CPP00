#include <iostream>

void	megaphone(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		std::cout << static_cast<char>(std::toupper(str[i]));
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		while (++i < ac)
		{
			megaphone(av[i]);
			if (i != ac - 1)
				std::cout << " ";
			else
				std::cout << std::endl;
		}
	return (0);
}