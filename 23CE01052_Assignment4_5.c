#include<stdio.h>
int main()
{
    int m,n,c,i,j,s=0;
    printf("\n Enter a number:");
    scanf("%d",&m);
    c=m;
    n=(m>=100)&&(m<=999);
    switch(n)
    {
        case 0:
        printf("\n Wrong Input");
        break;

        case 1:
        {
        while(m>0)
        {
            j=m%10;
            s=s+j*j*j;
            m=m/10;
        }

        if(c==s)
        printf("\n YES");
        else
        printf("\n NO");
        }
        break;
    }
}