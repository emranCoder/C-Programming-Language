#include<stdio.h>
int main()
{
    int i,j,n,a,easy=0,hard=0;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a);
        if ( a==0)
        {
            easy++;
        }
        else
        {
            hard++;
        }
    }
    if ( hard>0)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }


    return 0;
}
