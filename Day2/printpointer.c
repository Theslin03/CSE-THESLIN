#include<stdio.h>
int main()
{
    int a=12;
    int *ptr;
    ptr=&a;
    printf("address:%p\n",&a);
    printf("address:%p\n",ptr);
    printf("value:%d",*ptr);
}
