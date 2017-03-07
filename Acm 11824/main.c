#include <stdio.h>
#include <math.h>
int main()
{
    long long int ar[100000],i,j,k,temp,flag,n,sum;
    scanf("%lld",&n);
    while(n--)
    {
        for(i=0,k=0;;i++)
        {
            k++;
            scanf("%lld",&ar[i]);
            if(ar[i]==0)
                break;
        }
        for(i=0;i<k-1;i++)
        {
            for(j=i+1;j<k-1;j++)
            {
                if(ar[i]<ar[j])
                {
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                }
            }
        }
        for(i=0,sum=0;i<k-1;i++)
        {
            sum+=2*pow(ar[i],i+1);
            if(sum>5000000)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("Too expensive\n");
        else
            printf("%lld\n",sum);
    }
    return 0;
}
