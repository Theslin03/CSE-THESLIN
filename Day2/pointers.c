#include<stdio.h>
void main()
{
    int a=2,b=3,temp;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("%d %d",a,b);
}
