#include <stdio.h>
int main()
{
    int n,y,x,i,j,tmp,xount;
    scanf("%d", &n);

    for (i=0; i<n; i++)
    {
        scanf("%d %d", &x,&y);
        if (x>y){tmp=x;x=y;y=tmp;}
        if (x%2 == 0)x--;
        x+=2;
        for (j=x; j< y; j+=2 )
        {
            xount+=j;
        }
        printf("%d\n", xount);
        xount=0;
    }

    return 0;
}


