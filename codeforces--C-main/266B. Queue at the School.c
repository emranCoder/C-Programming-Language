#include<stdio.h>
int main()
{
    int i,j,n,t;
    scanf("%d%d", &n,&t);
    char w[n];
    scanf("%s", &w);
    for(i=0; i<t; i++)
    {
        for (j=0; w[j]!='\0'; j++)
        {
            if ( w[j]== 'B' && w[j+1]=='G' )
            {
                w[j]='G';
                w[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",w);

    return 0;
}
