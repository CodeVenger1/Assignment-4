#include<stdio.h>
int main()
{
    float n,c,i;
    printf("\n Enter your current balance and your credit score:");
    scanf("%f %f",&n,&c);
    if(c<600)
    {
        i=n*(0.15);
        printf("\n interest is:%f",i);
    }
    else if(c>=600&&c<=750)
    {
        i=n*(0.12);
        printf("\n interest is:%f",i);
    }
    else if(c>750)
    {
        i=n*(0.10);
        printf("\n interest is:%f",i);
    }
    return 0;
}