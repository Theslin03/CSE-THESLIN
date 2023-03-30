#include<stdio.h>
int main()
{
    int a=6,b=3;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int sum=*p1+*p2;
    int div=*p1 / *p2;
    printf("Sum=%d",sum);
    printf("Qotient=%d",div);
    return 0;
}
