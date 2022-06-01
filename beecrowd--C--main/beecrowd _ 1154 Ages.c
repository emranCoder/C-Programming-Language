#include<stdio.h>

int main()
{
    int i;
    float n,fact,sum=0,a=0;
    scanf("%f", &n);
    while ( n>0)
    {
        sum+=n;
        if ( n>0)
        {
            a++;
        }
        scanf("%f",&n);
        fact=sum/a;
    }
    printf("%.2f\n", fact);;

    return 0;
}
