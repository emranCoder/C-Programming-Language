#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char s[1000],tmp;
    scanf("%s", &s);
    for (i=0; i<strlen(s); i++)
    {
        s[0]= toupper(s[0]);
        printf("%c",s[i]);
    }

    return 0;
}
