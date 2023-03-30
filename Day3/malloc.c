#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *numbers = (int*)malloc(4*sizeof(int));
    numbers[0]=1;
    numbers[1]=2;
    numbers[2]=3;
    printf("Sorted array:");
    for(int i=0;i<4;i++)
        printf("\nnumbers[%d]=%d",i,numbers[i]);
    return 0;
}
