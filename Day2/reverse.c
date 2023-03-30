#include<stdio.h>
void main()
{

    int a[20],al,ar[20];
    printf("enter the array length");
    scanf("%d",&al);
    printf("enter the array elements");
    for(int i=0;i<al;i++)
    {
        scanf("%d",&a[i]);
        ar[al-1-i]=a[i];
    }
    for(int i=0;i<al;i++){
        if(ar[i]==0)
            ar[i]=$;
        printf("%d",ar[i]);
    }
}
