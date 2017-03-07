#include <stdio.h>
int main()
{
    int in,rvn=0,i=0,a=0,j,n,arr[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=0;
        scanf("%d",&in);
        while(1)
        {
            a=in;
            arr[j]=in;
            rvn=0;
            while(in>0)
            {
                rvn=rvn*10+(in%10);
                in=in/10;
            }
            if(rvn==arr[j])
                break;
            arr[j]=rvn+a;
            in=arr[j];
            j++;
        }
        printf("%d %d\n",j,rvn);
    }
    return 0;
}
