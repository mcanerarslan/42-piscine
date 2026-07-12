#### ex00 ####

#include <stdio.h>
int main(void)
{
     printf("%s", ft_strdup("caner"));
}

#### ex01 ####

#include <stdio.h>
int main(void)
{
    int *arr;
    int i;
    int min;
    int max;

    min = 2;
    max = 8;
    arr = ft_range(min,max);

    if(!arr)
        return(1);
    i = 0;
    while(i < (max-min))
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");
    free(arr);

    return(0);
}

#### ex02 ####

#include <stdio.h>
int main(void)
{
    int i;
    int *arr;
    int size;

    size = ft_ultimate_range(&arr,5,12);
    if(size == -1)
        return (1);
    i = 0;
    while(i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return (0);
}

#### ex03 ####

#include <stdio.h>
int	main(void)
{
	char	*strs[3];
	char	*result;

	strs[0] = "caner";
	strs[1] = "caner1";
	strs[2] = "caner2";
	result = ft_strjoin(3, strs, " - ");
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}