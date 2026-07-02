
#include <string.h>
#include <stdio.h>

// Copy src into dest, including the terminating null byte.
char *ft_strcpy(char *dest, char *src)
{

    int index;
    index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}

int main(void)
{

    char destarr1[] = "Caner Arslan";
    char destarr2[] = "Caner Arslan";
    char arr[] = "Ars";

    strcpy(destarr1, arr); // orjinal
    printf("%s!\n", destarr1);

    ft_strcpy(destarr2, arr); // task
    printf("%s!\n", destarr2);
}