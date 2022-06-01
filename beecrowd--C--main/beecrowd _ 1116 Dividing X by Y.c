#include<stdio.h>
int main()
{
    int a,b,i,n;
    float divide;

    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d%d", &a,&b);
        if (b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            divide = (float)a/(float)b;
            printf("%.1f\n", divide);
        }

    }

    return 0;
}
