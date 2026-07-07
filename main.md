###### ======== EX00 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char destarr1[] = "Caner Arslan";
    char destarr2[] = "Caner Arslan";
    char arr1[] = "Ars";
    char arr2[] = "Mahmut";

    strcpy(destarr1, arr1); // orjinal
    printf("%s!\n", destarr1);

    ft_strcpy(destarr2, arr2); // task
    printf("%s!\n", destarr2);
}

###### ======== EX01 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char chararray_strncpy[10];
    char chararray_ft_strncpy[10];
    strncpy(chararray_strncpy, "abcdefgh", sizeof(chararray_strncpy));
    printf("\n%s|\n\n", chararray_strncpy);
    ft_strncpy(chararray_ft_strncpy, "abcdefgh", sizeof(chararray_ft_strncpy));
    printf("\n%s|\n\n", chararray_ft_strncpy);
}

###### ======== EX02 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";

    printf("%s \t%d \n", text0,ft_str_is_alpha(text0));
    printf("%s \t%d \n", text1,ft_str_is_alpha(text1));
    printf("%s \t%d \n", text2,ft_str_is_alpha(text2));
    printf("%s \t%d \n", text3,ft_str_is_alpha(text3));
    printf("%s \t%d \n", text4,ft_str_is_alpha(text4));
    printf("%s \t%d \n", text5,ft_str_is_alpha(text5));
    printf("%s \t%d \n", text6,ft_str_is_alpha(text6));
}

###### ======== EX03 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";

    printf("%s \t%d \n", text0,ft_str_is_numeric(text0));
    printf("%s \t%d \n", text1,ft_str_is_numeric(text1));
    printf("%s \t%d \n", text2,ft_str_is_numeric(text2));
    printf("%s \t%d \n", text3,ft_str_is_numeric(text3));
    printf("%s \t%d \n", text4,ft_str_is_numeric(text4));
    printf("%s \t%d \n", text5,ft_str_is_numeric(text5));
    printf("%s \t%d \n", text6,ft_str_is_numeric(text6));
}

###### ======== EX04 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";

    printf("%s \t%d \n", text0,ft_str_is_lowercase(text0));
    printf("%s \t%d \n", text1,ft_str_is_lowercase(text1));
    printf("%s \t%d \n", text2,ft_str_is_lowercase(text2));
    printf("%s \t%d \n", text3,ft_str_is_lowercase(text3));
    printf("%s \t%d \n", text4,ft_str_is_lowercase(text4));
    printf("%s \t%d \n", text5,ft_str_is_lowercase(text5));
    printf("%s \t%d \n", text6,ft_str_is_lowercase(text6));
}

###### ======== EX05 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";

    printf("%s \t%d \n", text0,ft_str_is_uppercase(text0));
    printf("%s \t%d \n", text1,ft_str_is_uppercase(text1));
    printf("%s \t%d \n", text2,ft_str_is_uppercase(text2));
    printf("%s \t%d \n", text3,ft_str_is_uppercase(text3));
    printf("%s \t%d \n", text4,ft_str_is_uppercase(text4));
    printf("%s \t%d \n", text5,ft_str_is_uppercase(text5));
    printf("%s \t%d \n", text6,ft_str_is_uppercase(text6));
}

###### ======== EX06 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text0[6] = "";
    char text1[6] = "caner";
    char text2[6] = "Caner";
    char text3[6] = "CANER";
    char text4[6] = "Cane1";
    char text5[6] = "cane1";
    char text6[6] = "12345";
    char text7[] = " =* ~";

    printf("%s \t%d \n", text0,ft_str_is_printable(text0));
    printf("%s \t%d \n", text1,ft_str_is_printable(text1));
    printf("%s \t%d \n", text2,ft_str_is_printable(text2));
    printf("%s \t%d \n", text3,ft_str_is_printable(text3));
    printf("%s \t%d \n", text4,ft_str_is_printable(text4));
    printf("%s \t%d \n", text5,ft_str_is_printable(text5));
    printf("%s \t%d \n", text6,ft_str_is_printable(text6));
    printf("%s \t%d \n", text7,ft_str_is_printable(text7));
}

###### ======== EX07 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text[6] = "cAner";
    printf("%s \t=>\t", text);
    printf("%s \n", ft_strupcase(text));
}

###### ======== EX08 ======== ######

#include <string.h>
#include <stdio.h>
int main(void)
{
    char text[6] = "cAnEr";
    printf("%s \t=>\t", text);
    printf("%s \n", ft_strlowcase(text));
}

###### ======== EX09 ======== ######

#include <stdio.h>
int main(void)
{

    char msg[] = "hi, how are you? 42words forty-two; fifty+and+one";

    printf("%s\n", ft_strcapitalize(msg));
}