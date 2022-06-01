#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,ans=0,f=0;
    char s[100];
    scanf("%s", &s);
    for ( i=0; s[i]!='\0'; i++)
    {
        for ( j=i-1; j>=0; j--)
        {
            if ( s[i]== s[j])
            {
                f=1;
                break;
            }
        }
        if ( f==0)
            {
                ans++;

            }
            f=0;
    }
    if (ans%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {

        printf("IGNORE HIM!\n");
    }


    return 0;
}
