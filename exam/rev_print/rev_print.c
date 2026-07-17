#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

char *ft_rev_print (char *str)
{
    int size = ft_strlen(str) - 1;
    
    while(size >= 0)
    {
		write(1, &str[size], 1);
        size--;
    }
    return (str);
}


int main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}