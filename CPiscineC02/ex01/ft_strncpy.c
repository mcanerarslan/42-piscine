#include <string.h>
#include <stdio.h>

// Copy up to n bytes from src to dest without exceeding the specified length. / Belirtilen uzunluğu aşmadan src’den dest’e en fazla n bayt kopyalar.
char *ft_strncpy(char *dest, char *src, unsigned int n)
{

    int index;
    index = 0;
    while (index < n && src[index])
    {
        dest[index] = src[index];
        index++;
    }
    while (index < n)
    {
        dest[index] = '\0';
        index++;
    }
    return dest;
}

int main(void)
{
    char chararray_strncpy[10];
    char chararray_ft_strncpy[10];

    (void)strncpy(chararray_strncpy, "abcdefgh", sizeof(chararray_strncpy));
    printf("\n%s|\n\n", chararray_strncpy);

    (void)ft_strncpy(chararray_ft_strncpy, "abcdefgh", sizeof(chararray_ft_strncpy));
    printf("\n%s|\n\n", chararray_ft_strncpy);
}