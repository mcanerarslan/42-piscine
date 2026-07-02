#include <string.h>
#include <stdio.h>

// 65-90 A-Z, 97-122 a-z
int ft_str_is_alpha(char *str)
{
    int index;
    char c;

    index = 0;
    while (str[index])
    {
        c = str[index];

        if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
        {
            return 0;
        }
        index++;
    }

    return 1;
}

int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";

    printf("%s \t%d \n", text0,ft_str_is_alpha(text0));
    printf("%s \t%d \n", text1,ft_str_is_alpha(text1));
    printf("%s \t%d \n", text2,ft_str_is_alpha(text2));
    printf("%s \t%d \n", text3,ft_str_is_alpha(text3));
    printf("%s \t%d \n", text4,ft_str_is_alpha(text4));
    printf("%s \t%d \n", text5,ft_str_is_alpha(text5));
    printf("%s \t%d \n", text6,ft_str_is_alpha(text6));
}