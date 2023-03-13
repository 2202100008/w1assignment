#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER");
    scanf("%d",&num);
    if(num % 15==0)
    {
        printf("FIZZBUZZ");
    }
     else if(num % 5==0)
    {
        printf("BUZZ");
    }
    else if(num % 3==0)
    {
        printf("FIZZ");
    }
    else
    {
        printf("%d",num);
    }
    return 0;
}