#include<stdio.h>
int main()
{

    int m;
    float n,c,sum=0,sub=0,mul=0, div;
    printf("\n Enter two numbers:");
    scanf("%f %f",&n,&c);
    printf("\n Enter your choice:");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        sum=(n+c);
        printf("\n sum=%f",sum);
        break;

        case 2:
        sub=(n-c);
        printf("\n sub=%f",sub);
        break;

        case 3:
        mul=n*c;
        printf("\n mul=%f",mul);
        break;

        case 4:
        div=n/c;
        printf("\n div=%f",div);
        break;

        default:
        printf("\n Wrong input");
        break;
    }
    return 0;
}
