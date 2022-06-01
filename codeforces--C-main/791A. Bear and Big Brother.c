#include<stdio.h>

int main()
{
    int li,bo,i=0;
    scanf("%d%d",&li,&bo);
    while(1)
    {
        i++;
        li=li*3;
        bo=bo*2;
        if(li>bo)
        {
            printf("%d",i);
            break;
        }

    }



    return 0;
}

 
