// Write a program that takes a string and displays it, replacing each of its letters by the letter 13
// spaces ahead in alphabetical order
// EG 'z' becomes 'm', case remains unaffected
// Output followed by a new line
// If number of arguments is not 1, then program displays a new line

#include <unistd.h>

int     main(int argc, char **argv)
{
    int index;

    index = 0;
    if (argc == 2)
    {
        while(argv[1][index] != '\0')
        {
            if (argv[1][index] >= 'A' && argv[1][index] <= 'M')
            {
                argv[1][index] += 13;
            }
            else if (argv[1][index] >= 'N' && argv[1][index] <= 'Z')
            {
                argv[1][index] -= 13;
            }
            else if (argv[1][index] >= 'a' && argv[1][index] <= 'm')
            {
                argv[1][index] += 13;
            }
            else if (argv[1][index] >= 'n' && argv[1][index] <= 'z')
            {
                argv[1][index] -= 13;
            }
            write(1, &argv[1][index], 1);
            index++;
        }
    }
    write(1, "\n", 1);
    return (0);
}