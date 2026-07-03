#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        if (index == 0 || !((str[index - 1] >= 'a' && str[index - 1] <= 'z')
                || (str[index - 1] >= 'A' && str[index - 1] <= 'Z')
                || (str[index - 1] >= '0' && str[index - 1] <= '9')))
        {
            if (str[index] >= 'a' && str[index] <= 'z')
                str[index] -= 32;
        }
        else
        {
            if (str[index] >= 'A' && str[index] <= 'Z')
                str[index] += 32;
        }
        index++;
    }
    return str;
}

// bitmedi

int main(void)
{

    char msg[30] = "meTin 123Cok OneMli";

    printf("%s", ft_strcapitalize(msg));
}