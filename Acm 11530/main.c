#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,sum,len;
    char ch[1000];
    scanf("%d",&n);
    while(getchar()!='\n');
    for(i=1;i<=n;i++)
    {
        sum=0;
        gets(ch);
        len=strlen(ch);
        for(j=0;j<len;j++)
        {
            if(ch[j]>96 && ch[j]<=99)
                sum+=ch[j]-96;
            if(ch[j]>99 && ch[j]<=102)
                sum+=ch[j]-99;
            if(ch[j]>102 && ch[j]<=105)
                sum+=ch[j]-102;
            if(ch[j]>105 && ch[j]<=108)
                sum+=ch[j]-105;
            if(ch[j]>108 && ch[j]<=111)
                sum+=ch[j]-108;
            if(ch[j]>111 && ch[j]<=115)
                sum+=ch[j]-111;
            if(ch[j]>115 && ch[j]<=118)
                sum+=ch[j]-115;
            if(ch[j]>118 && ch[j]<=122)
                sum+=ch[j]-118;
            if(ch[j]==' ')
                sum++;
        }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}
