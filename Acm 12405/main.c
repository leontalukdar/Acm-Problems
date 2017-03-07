#include <stdio.h>
int main()
{
    int n,i,total,j,t;
    char ch[101];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %s",&n,ch);
        for(j=0,total=0;j<n;)
        {
            if(ch[j]=='#')
                j++;
            else
            {
                total++;
                j+=3;
            }
        }
        printf("Case %d: %d\n",i,total);
    }
    return 0;
}
