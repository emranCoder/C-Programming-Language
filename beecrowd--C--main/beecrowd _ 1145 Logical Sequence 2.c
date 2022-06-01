#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k=1,j,i,l;
    scanf("%d %d", &a,&b);
    l=a;
    if ( a<b)
    {

    for (i=1; i<=b/a; i++)
    {
        printf("%d", k);
        for (j=k+1; j<=l; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        k+=a;
        l+=a;
    }

    }
    return 0;
}
