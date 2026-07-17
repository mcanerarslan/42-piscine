#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int k;

    i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (j < i)
            {
                if (av[1][i] == av[1][j])
                    break;
                j++;
            }
            if (j == i)
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }

        i = 0;
        while (av[2][i])
        {
            j = 0;
            while (av[1][j])
            {
                if(av[2][i] == av[1][j])
                    break;
                j++;
            }

            k = 0;
            while(k < i)
            {
                if(av[2][i] == av[2][k])
                    break;
                k++;
            }

            if(k == i && av[1][j] == '\0')
            {
                write(1, &av[2][i],1);
            }

            i++;
        }
    }
    write(1, "\n", 1);
}