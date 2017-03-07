#include <stdio.h>
int main()
{
    int d,m,y,ar[101]={0},i,n,mini,maxm;
    char ch[101][16];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",ch[i],&d,&m,&y);
        ar[i]=(y*365)+(m*30)+d;
    }
    maxm=0;
    mini=ar[0];
    for(i=0;i<n;i++)
    {
        if(maxm<ar[i])
            maxm=ar[i];
    }
    for(i=1;i<n;i++)
    {
        if(mini>ar[i])
            mini=ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(maxm==ar[i])
            printf("%s\n",ch[i]);
    }
    for(i=0;i<n;i++)
    {
        if(mini==ar[i])
            printf("%s\n",ch[i]);
    }
    return 0;
}
