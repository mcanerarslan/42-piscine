#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strrev(char *str)
{
    int start = 0;
    int end = (ft_strlen(str) - 1); 
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return (str);
}

#include <stdio.h>
int main(void)
{
    char text[] = "Caner";

    printf("%s",ft_strrev(text));
}