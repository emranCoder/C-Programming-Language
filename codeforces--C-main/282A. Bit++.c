#include<stdio.h>
int main()
{
    int m,x=0,i;
    char n[4];
    scanf("%d", &m);
    for (i=0; i<m; i++)
    {
        scanf("%s", &n);

        if (n[1]=='+')
        {
            x++;
        }else
        {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}
