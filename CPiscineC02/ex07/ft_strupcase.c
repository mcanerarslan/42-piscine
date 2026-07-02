#include <string.h>
#include <stdio.h>

char *ft_str_is_strupcase(char *str)
{
    int index;
    char c;

    index = 0;
    while (str[index])
    {
        c = str[index];
        if (((c >= 97 && c <= 122)))
        {
            str[index] -= 32;
        }
        index++;
    }
    return str;
}

int main(void)
{
    char text[6] = "cAner";
    printf("%s \t=>\t", text);
    printf("%s \n", ft_str_is_strupcase(text));
}