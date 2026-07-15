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
    int a = 10;
    int b = 99;

    ft_swap(&a,&b);
    printf("%d, %d",a,b);
}