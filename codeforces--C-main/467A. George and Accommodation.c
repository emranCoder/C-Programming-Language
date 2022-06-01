#include<stdio.h>

int main()
{
    int i,n,p,q,count=0;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        scanf("%d%d", &p,&q);
        if (2<=q-p)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
