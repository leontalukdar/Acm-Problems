#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,l,m,a,r,g,j,t,mini;
    char ch[1000];
    scanf("%d",&n);
    while(n--)
    {
        int arr[10]={0};
        m=a=r=g=j=t=0;
        scanf("%s",ch);
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]=='M')
                m++;
            if(ch[i]=='A')
                a++;
            if(ch[i]=='R')
                r++;
            if(ch[i]=='G')
                g++;
            if(ch[i]=='I')
                j++;
            if(ch[i]=='T')
                t++;
        }
        a=a/3;
        r=r/2;
        arr[0]=m;
        arr[1]=a;
        arr[2]=r;
        arr[3]=g;
        arr[4]=j;
        arr[5]=t;
        mini=m;
        for(i=0;i<6;i++)
        {
            if(mini>=arr[i])
                mini=arr[i];
        }
        if(mini!=0 && a!=0 && r!=0 && g!=0 && j!=0 && t!=0)
            printf("%d\n",mini);
        else
            printf("0\n");
    }
    return 0;
}
