#include<stdio.h>
#include<string.h>
int main()
{

    int valid=0;
    char a[25];
    printf("enter the string");
    scanf("%s",a);
    int len=strlen(a);
    for (int i=0;i<len;i++)
    {
        if(a[i]=='*')
            valid++;
        else if (a[i]=='#')
            valid--;
        else
                printf("invalid");


    }
    if(valid==0)
    {
        printf("valid string");
        printf("%d",valid);

    }
    else
    {
        printf("%d",valid);
    }
    return 0;

}
