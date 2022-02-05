
int ft_strlen(char *str)
{
    int index;
    
    index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return (index);
}

#include <stdio.h>

int main(void)
{
    char *test = "this is a string to test";
    printf("\n\t string: %s, count: %d", test, ft_strlen(test));
    return (0);
}