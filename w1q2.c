#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER:\t");
    scanf("%d",&num);
    if(num>0)
    {
        printf("POSITIVE:");
    }
    else if(num<0)
    {
        printf("NEGATIVE");
    }
    else if(num==0)
    {
        printf("ZERO");
    }
    else
    {
    printf("%d\n");
    }
    return 0;
}
