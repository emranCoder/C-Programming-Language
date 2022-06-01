#include<stdio.h>
int main()
{
    int positive=0,i;
    float a[5],sum=0,avg;

    for (  i=0; i<=5; i++)
    {
        scanf("%f", &a[i]);
    }
    for (  i=0; i<=5; i++)
    {
        if (a[i]>=0)
        {
            positive++;
            sum+=a[i];
        }
    }
    avg = sum/positive;
    printf("%d valores positivos\n", positive);
    printf("%.1f\n", avg);



    return 0;
}

