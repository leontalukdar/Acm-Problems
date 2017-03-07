#include<stdio.h>
int main()
{
    int arr1[3001],arr2[3001],arr3[3000],dif,a=0,i,j,k=0,l,m=0,n,flag=0;
    while(scanf("%d",&n)==1)
    {
        for(i=0,j=0;i<n;i++)
        {
            scanf("%d",&arr1[i]);

        }
        for(i=1,j=0;i<n;i++)
        {
            dif=arr1[i-1]-arr1[i];
            if(dif<0)
                dif*=-1;
            arr2[j]=dif;
            j++;
            k=j;
        }
        for(j=1,l=0;j<k;j++)
        {
            a=arr2[j-1]-arr2[j];
            arr3[l]=a;
            l++;
            m=l;
        }
        for(l=0;l<m;l++)
        {
            if(arr3[l]==arr3[l+1])
                flag=1;
            else
                flag=0;
                break;
        }
        if(flag==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }
    return 0;
}
