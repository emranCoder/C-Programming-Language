#include<stdio.h>
int main()
{
    int n,i,ln;
    char ar[100];
    scanf("%d", &n);
    for( i=0; i<n ; i++)
    {
        scanf("%s", &ar);
        ln = strlen(ar);
        if (ln>10)
        {
            printf("%c%d%c\n", ar[0],ln-2,ar[ln-1]);
        }
        else
        {
            printf("%s", ar);
        }
        printf("\n");
    }

    return 0;
}
 
