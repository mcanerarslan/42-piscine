###### ============== EX00 ============== ######

#include <stdio.h>
int main(void)
{
    char kaynak1[] = "kabak";
    char kaynak2[] = "kabuk";

    printf("%d\n", ft_strcmp(kaynak1, kaynak2));
}

###### ============== EX01 ============== ######

#include <stdio.h>
int main(void)
{
    char kaynak1[] = "kabak";
    char kaynak2[] = "kabuk";

    printf("b = b > %d\n", ft_strncmp(kaynak1, kaynak2, 3));
    printf("a != u > %d\n", ft_strncmp(kaynak1, kaynak2, 4));
}

###### ============== EX02 ============== ######

#include <stdio.h>
int main(void)
{
    char destarray[20] = "Caner";
    char srcarray[] = "_Arslan";
    
    printf("%s",ft_strcat(destarray,srcarray));
    return (0);
}

###### ============== EX03 ============== ######

#include <stdio.h>
int main(void)
{
    char destarray[20] = "Caner";
    char srcarray[] = "_Arslan";
    
    printf("%s",ft_strncat(destarray,srcarray,4));
    return (0);
}

###### ============== EX04 ============== ######

#include <stdio.h>

int main(void)
{
	char str_array[] = "can er ars";
	char to_find[] = "can";

	printf("%s", ft_strstr(str_array,to_find));
}

###### ============== EX05 ============== ######

#include <stdio.h>

int main(void)
{
    char destarray[] = "Caner";
    char srcarray[] = "_Arslan";
    printf("%d", ft_strlcat(destarray, srcarray, sizeof(destarray)));
    return (0);
}
