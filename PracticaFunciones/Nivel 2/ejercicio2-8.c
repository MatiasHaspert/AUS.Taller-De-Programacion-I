#include <stdio.h>
#include <stdlib.h>

int func();
int func2();

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        printf("%d ",func());
    }

    printf("\n");
    
    for ( i = 0; i < 20; i++)
    {
        printf("%d ",func2());
    }
        
    return EXIT_SUCCESS; 
}


int func ()
{
    static int b = 0;

    return b++;
}

int func2 ()
{
    static int c = 0;

    if(c == 4)
    {
        c = c - 4;
    }

    return c++;
}