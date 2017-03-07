#include <stdio.h>
#include <string.h>
int main()
{
    char ch[105][105];
    int i,j,t=0,max=0,len;
    for(i=0;i<105;i++)
    {
        for(j=0;j<105;j++)
            ch[i][j]=' ';
    }
    while(gets(ch[t]))
        t++;
    for(i=0;i<t;i++)
    {
        len=strlen(ch[i]);
        if(len>max)
            max=len;
        ch[i][len]=' ';
    }
    for(i=0;i<max;i++)
    {
        for(j=t-1;j>=0;j--)
            printf("%c",ch[j][i]);
        printf("\n");
    }
    return 0;
}
