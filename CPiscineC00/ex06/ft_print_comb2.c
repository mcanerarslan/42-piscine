#include <unistd.h>

void ft_print_comb2(void)
{

    for (char x1 = '0'; x1 <= '9'; x1++)
    {
        for (char x2 = '0'; x2 <= '9'; x2++)
        {
            for (char y1 = '0'; y1 <= '9'; y1++)
            {
                for (char y2 = '1'; y2 <= '9'; y2++)
                {
                    if (x1 < y1 || (x1 == y1 && x2 < y2))
                    {
                        write(1, &x1, 1);
                        write(1, &x2, 1);
                        write(1, " ", 1);
                        write(1, &y1, 1);
                        write(1, &y2, 1);
                        if (!(x1 == '9' && x2 == '8' && y1 == '9' && y2 == '9'))
                        {
                            write(1, ", ", 2);
                        }
                    }
                }
            }
        }
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}
