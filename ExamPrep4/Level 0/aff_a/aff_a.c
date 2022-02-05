// Program that takes a string, displays first 'a' character it encounters, plus a new line
// If no 'a' characters in the string, the program just writes a new line.
// If nuber of parameters isn't 1, program displays an 'a' + new line

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	index;

	index = 0;
	if (argc > 1)
	{
		while (argv[1][index])
		{
			if (argv[1][index] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			index++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	return (0);
}