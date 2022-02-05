#include <unistd.h>

int main(void)
{
    char letter;

    letter = 'z';
    while (letter >= 'a')
    {
        if (letter % 2 == 0)
        {
            write(1, &letter, 1);
        }
        else
        {   letter = letter - 32;   
            write(1, &letter, 1);
            letter = letter + 32;
        }
        letter--;
    }
    return (0);
}