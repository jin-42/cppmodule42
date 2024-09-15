# include <iostream>
# include <cctype>
# include <cstring>

int main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else 
	{
		i = 1;
		while (i < ac)
		{
			for(j = 0; j < strlen(av[i]); j++)
			{
				std::cout << static_cast<char>(toupper(av[i][j]));
			}
			i++;
		}
		std::cout << std::endl;
	}
}
