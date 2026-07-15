int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_rev_print (char *str)
{
    int i;
    int end = ft_strlen(str) - 1;
    char temp;

    i = 0;
    while(i < end)
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
    char text[] = "CaNner arslan deneme bir iki uc";
    char *deneme;

    deneme = ft_rev_print(text);
    
    int i;

    i = 0;
    while(text[i])
    {
        printf("%c",text[i]);
        i++;
    }
}