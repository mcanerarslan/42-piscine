
###### EX00 #####

#include <stdio.h>
int main(void)
{
	int number = 10;

	printf("Öncesi: %d\n", number);
	ft_ft(&number);
	printf("Sonrası: %d", number);
}


###### EX01 #####

#include <stdio.h>
int main(void){
	int number = 10;

	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	ptr1 = &number;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);

	printf("%d", number);
}


###### EX02 #####

#include <stdio.h>
int main(void)
{
	int number1 = 1;
	int number2 = 99;

	printf("Öncesi:\t\t 1.Sayı: %d,\t 2.Sayı: %d\n", number1, number2);
	ft_swap(&number1, &number2);
	printf("Sonrası:\t 1.Sayı: %d,\t 2.Sayı: %d\n", number1, number2);
}


###### EX03 #####

#include <stdio.h>
int main(void)
{
	int number1 = 22;
	int number2 = 7;

	int divided;
	int modulo;

	ft_div_mod(number1, number2, &divided, &modulo);

	printf("%d sayısını %d'ye böldüğümüzde bölüm %d, kalan ise %d\n", number1, number2, divided, modulo);
}


###### EX04 #####


#include <stdio.h>
int main(void)
{
	int number1 = 22;
	int number2 = 7;

	printf("Öncesi:\n");
	printf("a = %d\n", number1);
	printf("b = %d\n", number2);

	ft_ultimate_div_mod(&number1, &number2);

	printf("\nSonrası:\n");
	printf("a (bölüm) = %d\n", number1);
	printf("b (kalan) = %d\n", number2);
}



###### EX05 #####


#include <stdio.h>
int main(void)
{
	char text[15] = "Caner Arslan";
	ft_putstr(text);
}


###### EX06 #####


#include <stdio.h>
int main(void)
{
	char text[] = "Caner Arslan";
	printf("%s nin uzunluğu (%d) karakter\n", text, ft_strlen(text));
}


###### EX07 #####


#include <stdio.h>
void ft_write_array(int *tab, int size)
{

	int i = 0;
	while (tab[i])
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int numberarray[] = {1, 2, 3, 4, 5};

	printf("Öncesi: \t");
	ft_write_array(numberarray, 5);
	ft_rev_int_tab(numberarray, 5);

	printf("\nSonrası: \t");
	ft_write_array(numberarray, 5);
}


###### EX08 #####


#include <stdio.h>
void ft_write_array(int *tab, int size)
{

	int i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	int numberarray[] = {1, -1, 100, 11, 5};

	printf("Öncesi: \t");
	ft_write_array(numberarray, 5);
	ft_sort_int_tab(numberarray, 5);

	printf("\nSonrası: \t");
	ft_write_array(numberarray, 5);
}
