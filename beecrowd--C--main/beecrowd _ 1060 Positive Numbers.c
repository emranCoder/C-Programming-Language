#include<stdio.h>

int main()
{
    int i,sum=0;
    float a[5];

    for ( i=0; i<=5; i++)
    {
        scanf("%f", &a[i]);
        if (a[i] >0)
        {
            sum =sum+1;
        }
    }

    printf ("%d valores positivos\n", sum);



    return 0;
}
