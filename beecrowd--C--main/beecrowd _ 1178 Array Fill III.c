#include<stdio.h>

int main()
{
    int j;
    double n;
    scanf("%lf", &n);
    for (j=0; j<100; j++)

    {
        printf("N[%d] = %.4lf\n", j,n);
        n=n/2.0;
    }

    return 0;
}


