#include <unistd.h>
int main(void)
{
    int i;

    i = 0;
    char *text = "zYxWvUtSrQpOnMlKjIhGfEdCbA";
    
    while(text[i])
    {
        write(1,&text[i],1);
        i++;
    }
    write(1,"\n",1);
}