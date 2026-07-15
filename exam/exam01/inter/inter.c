#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    char list[1000];
    int i = 0;
    int k = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            int j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    list[k++] = av[1][i];
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
        list[k] = '\0';
    }
    write(1, "\n", 1);
    write(1, "-\n", 2);
    i = 0;
    while (list[i])
    {
        write(1, &list[i], 1);
        i++;
    }

}