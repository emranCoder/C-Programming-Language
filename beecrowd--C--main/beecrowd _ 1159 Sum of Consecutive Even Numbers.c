#include<stdio.h>
int main ()
{
    int n,x,y,i,tmp,sum,j;
    while (1)
    {
        sum=0;
        scanf("%d", &x);
        if(x==0)
        {
            break;
        }

        if ( x%2!=0)
        {
            x++;
        }
        for ( j=0; j<5; j++)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n", sum);
    }
    return 0;
}
