#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int index;
    char c;

    index = 0;
    while (str[index])
    {
        c = str[index];
        if (((c >= 65 && c <= 90)))
        {
            str[index] += 32;
        }
        index++;
    }
    return str;
}

int main(void)
{
    char text[6] = "cAnEr";
    printf("%s \t=>\t", text);
    printf("%s \n", ft_strlowcase(text));
}