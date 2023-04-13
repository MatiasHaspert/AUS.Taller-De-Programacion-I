#include <stdio.h>
#include <stdlib.h> //rand() srand()
#include <unistd.h> // getpid()
#define N 100

int main()
{
    int array[N];
    int i;

    srand(getpid());

    for (i=0; i < N; i++)
    {
        array[i] = rand() %101;
    }
    for( i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}