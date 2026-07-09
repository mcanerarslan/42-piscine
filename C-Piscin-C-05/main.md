##### ex00 #####

#include <stdio.h>
int main(void)
{
    int number;

    number = 5;
    printf("Factorial of %d is %d \n", number, ft_iterative_factorial(number));
}

##### ex01 #####

#include <stdio.h>
int main()
{
    int number;

    number = 3;
    printf("Factorial of %d is %d \n", number, ft_recursive_factorial(number));
}

##### ex02 #####

#include <stdio.h>
int main(void)
{
    int nbr;
    int pwr;

    nbr = 5;
    pwr = 2;
    printf("%d to the %d is %d \n", nbr, pwr, ft_iterative_power(nbr, pwr));
}

##### ex03 #####

#include <stdio.h>
int main(void)
{
    int nbr;
    int pwr;

    nbr = 5;
    pwr = 3;
    printf("%d to the %d is %d \n", nbr, pwr, ft_recursive_power(nbr, pwr));
}

##### ex04 #####

int main(void)
{
    printf("%d\n",ft_fibonacci(0));
    printf("%d\n",ft_fibonacci(1));
    printf("%d\n",ft_fibonacci(2));
    printf("%d\n",ft_fibonacci(3));
    printf("%d\n",ft_fibonacci(4));
}

##### ex05 #####

#include <stdio.h>

int main(void)
{
    printf("%d",ft_sqrt(16));
    printf("%d",ft_sqrt(17));
}

#include <stdio.h>

int main(void)
{
    printf("%d",ft_sqrt(17));
}

##### ex06 ######

#include <stdio.h>
int main(void)
{
    printf("%d \n",ft_is_prime(2147483647));
}

###### ex07 ######

#include <stdio.h>
int main(void)
{
    printf("%d", ft_find_next_time(13));
}
