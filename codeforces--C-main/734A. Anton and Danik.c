#include<stdio.h>

int main()
{
    int i,n,f=0,k=0;
    char avater;
    scanf("%d", &n);
    for (i=0; i<=n; i++ )
    {
        scanf("%c", &avater);
        if (avater=='A')
        {
            f++;
        }
        if (avater=='D')
        {
            k++;
        }
    }

    if (f>k)
    {
        printf("Anton\n");
    }else if (f==k)
    {
        printf("Friendship\n");
    }else
    {
        printf("Danik");
    }

    return 0;
}
