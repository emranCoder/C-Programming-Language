#include<stdio.h>

int main()
{
    int i,n,a;

    scanf("%d", &n);

    for( i=1; i<=n; i++ )
    {
        scanf("%d", &a);
        if (a==0)
        {
            printf("NULL\n");
        }
        if ( a%2 == 0 )
        {
            if(a<0){
                printf("EVEN NEGATIVE\n");
            }else if(a>0){
                printf("EVEN POSITIVE\n");
            }
        }
        if(a%2 != 0 )
        {
            if(a<0){
                printf("ODD NEGATIVE\n");
            }else if(a>0){
                printf("ODD POSITIVE\n");
            }
        }
    }


    return 0;
}
