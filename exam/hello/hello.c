#include <unistd.h>
int main(void)
{
    int i;
    char *text = "Hello World!";

    i = 0;
    while(text[i])
    {
        write(1,&text[i],1);
        i++;
    }
    write(1,"\n",1);
}