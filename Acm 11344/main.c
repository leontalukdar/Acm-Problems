#include <stdio.h>
#include <string.h>
int main()
{
    int n,rem,len,i,j,t,num[13],k;
    char str[100000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        rem=0;
        scanf("%s",str);
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[j]);
        }
        len=strlen(str);
        for(j=0;j<n;j++)
        {
            for(k=0;k<len;k++)
            {
                rem=(rem*10+(str[k]-'0'))%num[j];
            }
        }
        if(rem==0)
            printf("%s - Wonderful.\n",str);
        else
            printf("%s - Simple.\n",str);
    }
    return 0;
}
