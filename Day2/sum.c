
#include<stdio.h>
void main()
{

    int a[20],al,sum=0,flag=0;
    printf("enter the array length");
    scanf("%d",&al);
    printf("enter the array elements");
    for(int i=0;i<al;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum of array elements: %d",sum);
    for(int i=2;i<sum;i++)
    {
        if(sum%i==0){
            flag=1;
            break;}
    }
    printf("\n%d",flag);
    if(flag==0)
        printf("Sum is prime");
    else
        printf("Sum is not prime");
}
