int ft_atoi(const char *str)
{
    int i;
    int p_n;
    int sum;

    i = 0;
    p_n = 1;
    sum = 0;
    while(str[i] == 32 || str[i] == 9)
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            p_n *= -1;
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
    {
        sum = (sum * 10) + (str[i] - '0');
        i++;
    }
    return (sum * p_n);
}

#include <stdio.h>
int main(void)
{
    printf("%d",ft_atoi("+---+12352"));
}