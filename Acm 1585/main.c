#include <stdio.h>
#include <string.h>
int main()
{
    char ch[85];
    int i,j,sum,t,len,x;
    scanf("%d",&t);
    while(getchar()!='\n');
    for(i=1;i<=t;i++)
    {
        sum=0;
        x=0;
        gets(ch);
        len=strlen(ch);

        for(j=0;j<len;j++)
        {
            if(ch[j]=='O')
                x++;
            else
                x=0;
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
