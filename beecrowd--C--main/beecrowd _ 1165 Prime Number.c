#include<stdio.h>
int main ()
{
    int i,T,j,n, y;
    scanf("%d", &T);
    for ( i=0; i<T; i++)
    {
        y=0;
        scanf("%d", &n);
            if ( n<4) printf("%d eh primo\n", n);
            else {
        for (j=2; j<n; j++)
        {
            if (n%j ==0)
            {
                y=1;
                break;
            }
            else
            {
                y=2;
            }
        }
        }
        if (y==2)
        {
            printf("%d eh primo\n", n);
        }
        else if (y==1)
        {
            printf("%d nao eh primo\n", n);
        }

    }

    return 0;
}

