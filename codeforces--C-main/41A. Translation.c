#include<stdio.h>

int main()
{
    int i,j,l,f=0;
    char a[100],b[100];
    scanf("%s%s", a,b);
    l=strlen(b);
    for (i=0,j=l-1; i<strlen(b); i++,j--)
    {
        if (a[i]==b[j])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }

    }
    if (f==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }



    return 0;
}
