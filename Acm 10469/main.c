#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    unsigned int a,b;
    int i,sum;
    while(scanf("%u %u",&a,&b)!=EOF)
    {
        int ar1[32]={0};
        int ar2[32]={0};
        int ar3[32]={0};
        sum=0;
        for(i=31;i>=0;i--)
        {
            ar1[i]=a%2;
            a=a/2;
            if(a==0)
                break;
        }
        for(i=31;i>=0;i--)
        {
            ar2[i]=b%2;
            b=b/2;
            if(b==0)
                break;
        }
        for(i=31;i>=0;i--)
        {
            ar3[i]=ar2[i]+ar1[i];
            if(ar3[i]>1)
                ar3[i]=0;
        }
        for(i=0;i<32;i++)
        {
            while(ar3[i]!=1)
                i++;
            sum+=ar3[i]*pow(2,(31-i));
        }
        printf("%d\n",sum);
    }
    return 0;
}
