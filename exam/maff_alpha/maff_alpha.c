#include <unistd.h>

int main(void)
{
    char *text;
    char c;

    text = "abcdefgh";
    int i;

    i = 0;
    while (text[i])
    {
        c = text[i];
        if (i % 2 != 0 && c >= 97 && c <= 122)
        {
            c -= 32;
        }
        write(1, &c, 1);
        i++;
    }
}