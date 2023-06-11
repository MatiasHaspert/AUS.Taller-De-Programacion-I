#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {32,-4,5,9,1,65};
    int i,j;

    printf("Array original:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d ",array[i]);
    }

    int pivot;

    for(j = 1; j < 6; j++)
    {
        pivot = array[j];
        i = j-1;
        while(i >= 0 && array[i] > pivot)
        {
            array[i+1] = array[i];
            i--;
        }

        array[i+1] = pivot;
        
    }

    printf("\nArray ordenado por el algortimo insertion sort:\n");
    for(i = 0; i < 6; i++)
    {
        printf("%d ",array[i]);
    }
    return EXIT_SUCCESS;
}