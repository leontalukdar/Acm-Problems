#include <stdio.h>
#include <string.h>
int main()
{
    char ch[200];
    int i,total,l,j;
    double sum;
    while(scanf("%s",ch)==1)
    {
        total=0;
        l=strlen(ch);
        if(ch[0]=='*'&& l==1)
            break;
        for(i=0;i<l-1;i++)
        {
            sum=0.0;
            if(ch[i]=='/')
            {
                i++;
                for(j=i;ch[j]!='/';j++)
                {
                    if(ch[j]=='W')
                        sum=sum+1.0;
                    if(ch[j]=='H')
                        sum=sum+(1.0/2.0);
                    if(ch[j]=='Q')
                        sum=sum+(1.0/4.0);
                    if(ch[j]=='E')
                        sum=sum+(1.0/8.0);
                    if(ch[j]=='S')
                        sum=sum+(1.0/16.0);
                    if(ch[j]=='T')
                        sum=sum+(1.0/32.0);
                    if(ch[j]=='X')
                        sum=sum+(1.0/64.0);
                }
            }
            if(sum==1.0)
                total++;
        }
        printf("%d\n",total);
    }
    return 0;
}
