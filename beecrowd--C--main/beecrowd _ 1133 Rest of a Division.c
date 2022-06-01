#include<stdio.h>
int main()
{
    int a,b,i,tmp,sum=0;

    scanf("%d%d", &a,&b);
    if (a>b)
    {
        tmp = a;
        a=b;
        b=tmp;
    }
    a++;
    for ( i=a; i<b; i++)
    {
        if ( i%5 == 2 || i%5 == 3)
        {
            printf("%d\n", i);
        }
    }


    return 0;
}
