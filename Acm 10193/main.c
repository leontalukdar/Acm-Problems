#include <stdio.h>
#include <string.h>
#include <math.h>
long int bn_dc(char *ch)
{
    int len;
    long int dc=0;
    len=strlen(ch);
    for(len--; *ch;ch++,len--)
    {
        dc=dc+(*ch-'0')*pow(2,len);
    }
    return dc;
}
int main()
{
    int n,i,c;
    long int dc1,dc2,flag;
    char s1[35],s2[35];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s %s",s1,s2);
        dc1=bn_dc(s1);
        dc2=bn_dc(s2);
        if(dc2>dc1)
        {
            flag=dc2;
            dc2=dc1;
            dc1=flag;
        }
        while(dc2!=0)
        {
            c=dc1%dc2;
            dc1=dc2;
            dc2=c;
        }
        if(dc1>1)
            printf("Pair #%d: All you need is love!\n",i);
        else
            printf("Pair #%d: Love is not all you need!\n",i);
    }
    return 0;
}
