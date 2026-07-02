#include <string.h>
#include <stdio.h>

// 48-57 0-9
int ft_str_is_numeric(char *str)
{
    int index;
    char c;

    index = 0;
    while (str[index])
    {
        c = str[index];

        if (!((c >= 48 && c <= 57)))
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

    printf("%s \t%d \n", text0,ft_str_is_numeric(text0));
    printf("%s \t%d \n", text1,ft_str_is_numeric(text1));
    printf("%s \t%d \n", text2,ft_str_is_numeric(text2));
    printf("%s \t%d \n", text3,ft_str_is_numeric(text3));
    printf("%s \t%d \n", text4,ft_str_is_numeric(text4));
    printf("%s \t%d \n", text5,ft_str_is_numeric(text5));
    printf("%s \t%d \n", text6,ft_str_is_numeric(text6));
}