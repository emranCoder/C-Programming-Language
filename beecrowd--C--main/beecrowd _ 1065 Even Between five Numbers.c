#include<stdio.h>
int main()
{
    int even=0,i,a[4];

    for (  i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (  i=0; i<=4; i++)
    {
        if ( a[i]-((a[i]/2)*2) == 0 )
        {
            even++;
        }
    }
    printf("%d valores pares\n", even);



    return 0;
}

