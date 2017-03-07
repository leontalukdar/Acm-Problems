#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,i,j,pos;
    char ch[101],ch1[110],ex[101];
    scanf("%d",&t);
    while(t--)
    {
        pos=0;
        scanf("%d",&n);
        while(getchar()!='\n');
        for(i=1;i<=n;i++)
        {
            gets(ch);
            if(strcmp(ch,"LEFT")==0)
            {
                ch1[i]='L';
                pos--;
            }

            else if(strcmp(ch,"RIGHT")==0)
            {
                ch1[i]='R';
                pos++;
            }
            else
            {
                sscanf(ch,"%s %s %d",ex,ex,&j);
                if(ch1[j]=='R')
                    pos++;
                else
                    pos--;
                ch1[i]=ch1[j];
            }
        }
        printf("%d\n",pos);
    }
    return 0;
}
