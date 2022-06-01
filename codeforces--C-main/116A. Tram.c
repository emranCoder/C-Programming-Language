#include<stdio.h>
int main()
{
    int i,n,f=0,a,b,m=0;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d%d", &a,&b);
        f=b-a+f;
        if(m<f)
        {
            m=f;
        }
    }
    printf("%d\n", m);

    return 0;
}
