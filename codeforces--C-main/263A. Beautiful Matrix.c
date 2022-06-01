#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,x,k,m;

    for ( i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
            scanf("%d", &x);
            if ( x == 1 )
            {
                k = abs(i-3);
                m = abs(j-3);
            }
        }
    }
    printf("%d\n", (k+m));

    return 0;

}
