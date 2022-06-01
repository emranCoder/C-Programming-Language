#include<stdio.h>
int main()
{
    int m,n,sum=0,i,j,tmp;
    for (j=1; j>0; j++)
    {
        scanf("%d %d", &m,&n);
        if ( m<=0 || n<=0) break;
        if ( m>n)
        {
            tmp=m;
            m=n;
            n=tmp;
        }
        for (i=m; i<=n; i++)
        {
            printf("%d ", i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        sum =0;
    }

    return 0;
}
