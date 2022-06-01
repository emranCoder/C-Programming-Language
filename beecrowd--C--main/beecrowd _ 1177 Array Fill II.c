#include<stdio.h>

int main()
{
    int N[1000],n,i=0,j;
    scanf("%d", &n);
    for (j=0; j<1000; j++)

    {
        if (i>=n)
        {
            i=0;
        }
        N[j]=i;
        i++;
        printf("N[%d] = %d\n", j,N[j]);
    }

    return 0;
}


