#include<stdio.h>
int main()
{
    int m;
    float f;
    printf("\n Enter your age:");
    scanf("%d",&m);
    if(m<5)
    printf("\n Free Entry");
    else if(m>=5&&m<=12)
    printf("\n Entre fee 20 rs");
    else if(m>=13&&m<=59)
    printf("\n Entre fee is 50 rs");
    else
    printf("\n Entree fee is %f",50-50*(0.2));
    return 0;
}