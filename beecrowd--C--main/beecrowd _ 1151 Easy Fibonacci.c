#include<stdio.h>

int main()
{
    int i,n;
    int t1=0,t2=1,next_tearm;
    next_tearm = t1+t2;
    scanf("%d", &n);
    printf("%d %d", t1,t2);

    for (i=3; i<=n; i++ )
    {
        printf(" %d", next_tearm );
        t1=t2;
        t2=next_tearm;
        next_tearm= t1+t2;
    }
    printf("\n");

    return 0;
}
