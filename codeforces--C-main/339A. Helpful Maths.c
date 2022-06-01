#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,j;
    char s[100],tmp;
    scanf("%s", &s);
    l=strlen(s);
    for (i=0; i<l; i++)
    {
        for(j=0; j<l-1; j++)
        {
            if(s[j]!='+'){
            if (s[j]>s[j+2])
            {
                tmp=s[j];
                s[j]=s[j+2];
                s[j+2]=tmp;
            }
            }
        }
    }
    puts(s);

    return 0;
}
