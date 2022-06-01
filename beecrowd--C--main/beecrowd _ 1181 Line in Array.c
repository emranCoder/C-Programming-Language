#include<stdio.h>

int main()
{
    int n,i,j;
    char M[2];
    double array[12][12],sum=0.0;

    scanf("%d", &n);
    scanf("%s", &M);

    for (i=0; i<12; i++)
    {
        for (j=0; j<12;j++)
        {
            scanf("%lf", &array[i][j]);
            if ( i == n )
        {
            sum+=array[i][j];
        }
        }
    }
    if (M[0]=='S')
    {
        printf("%.1lf\n", sum);
    }else if (M[0]=='M'){
        sum=sum/12.0;
        printf("%.1lf\n",sum);
    }


    return 0;
}


