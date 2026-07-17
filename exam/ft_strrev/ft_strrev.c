int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int end = ft_strlen(str) - 1;
    int i;
    char temp;

    i = 0;
    while (i < end)
    {
        temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        i++;
        end--;
    }
    return (str);
}

#include <stdio.h>
int main(void)
{
    char text[] = "Caner";

    printf("%s", ft_strrev(text));
}