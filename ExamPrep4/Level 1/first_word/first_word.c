// Write a Program takes a string and displays its first word + new line
// If there are not words just display a new line

#include <unistd.h>

int     main(int ac, char **av)
{
	int index;

	index = 0;
	if (ac == 2)
	{
		while (av[1][index] == ' ' || av[1][index] == '\t')
        {
            index++;
        }
		while (av[1][index] != '\0' && av[1][index] != ' ' && av[1][index] != '\t')
		{
			write(1, &av[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}