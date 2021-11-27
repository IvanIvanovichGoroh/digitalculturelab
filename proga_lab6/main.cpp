//6
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[4] = {-1, -12, -123, -1234};
    int *array_pointer = arr;
    for(int i=0; i<4 ; i++){
        printf("%d ", *array_pointer++);
    }
    printf("\n");

    int *array_2 = (int *) malloc(4*sizeof(int));
    array_2[0] = -1;
    array_2[1] = -12;
    array_2[2] = -123;
    array_2[3] = -1234;
    for(int i=0; i<4 ; i++){
        printf("%d ", array_2[i]);
    }
    printf("\n");

    free(array_2);
}