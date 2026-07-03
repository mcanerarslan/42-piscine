#include <stdio.h>
char *ft_strcapitalize(char *str)
{
    int index;

    index = 0;
    while (str[index])
    {
        char c;
        c = str[index];

        if ((!(str[0] >= 65 && str[0] <= 90) && (str[0] >= 97 && str[0] <= 122))){
            c -= 32;
        }
        else if((c >= 65 && c <= 90)){
            c += 32;
        }
        str[index] = c;
        index++;
    }
    str[index] = '\0';
    return str;
}

//bitmedi

int main(void)
{

    char msg[30] = "meTin 123Cok OneMli";

    printf("%s", ft_strcapitalize(msg));
}