#include<stdio.h>

int main()
{
    int i,n,h,m,count=0,count2=0;
    scanf("%d%d", &n,&h);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&m);
        if(m<=h)
        {
            count++;
        }else
        {
            count2+=2;
        }
    }
    printf("%d\n", count+count2);


    return 0;
}
