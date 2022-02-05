void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>

int main(void)
{
    int first = 245;
    int second = 36;
    printf("\n Before Function:");
    printf("\n\t first int %d , second int %d", first, second);
    ft_swap(&first, &second);
    printf("\n After Function:");
    printf("\n\t first int %d , second int %d", first, second);
    return (0);
}