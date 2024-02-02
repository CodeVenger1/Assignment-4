#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter a number:");
    scanf("%d",&a);
    b=a%2;
    switch(b)
    {
        case 0: printf("\n The number is even");
                break;
        case 1: printf("\n The number is odd");
                break;
    }
    return 0;
}