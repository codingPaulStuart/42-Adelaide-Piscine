// Write a program that takes a string, displays the first 'z' it
// encounters, then new line.
// If there are no 'z' in the parameter or if the number of parameters isn't 1
// It will still display a 'z' and a new line anyway

#include <unistd.h>

int main(int argc, char *argv[])
{
    int index;

    index = 0;
    if (argc > 1)
    {
        while(argv[1][index])
        {
            if(argv[1][index] == 'z')
            {
                write(1, "z", 1);
                break ;
            }
            else
            {
                write(1, "z", 1);
                break ;
            }
            index++;
        }
        write(1, "\n", 1);
    }
    else
    {
        write(1, "z", 1);
        write(1, "\n", 1);
    }   
    return (0);
}