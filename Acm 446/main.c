#include <stdio.h>
int main()
{
    int i,j,hex1,hex2,n,sum;
    char ch;
    scanf("%d",&n);
    while(n--)
    {
        int ar1[13]={0};
        int ar2[13]={0};
        scanf("%X %c %X",&hex1,&ch,&hex2);
        if(ch=='+')
            sum=hex1+hex2;
        else
            sum=hex1-hex2;
        i=j=0;
        while(1)
        {
            ar1[i]=hex1%2;
            hex1/=2;
            if(hex1==0)
                break;
            else
                i++;
        }
        while(1)
        {
            ar2[j]=hex2%2;
            hex2/=2;
            if(hex2==0)
                break;
            else
                j++;
        }
        for(i=12;i>=0;i--)
            printf("%d",ar1[i]);
        printf(" %c ",ch);
        for(i=12;i>=0;i--)
            printf("%d",ar2[i]);
        printf(" = %d\n",sum);
    }
    return 0;
}
