#include <stdio.h>
int main()
{
    int n,arr[55],i,j,k,l,m,temp;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&k);
        for(i=0;i<k;i++){
            scanf("%d",&arr[i]);
        }
        l=0;
        for(i=0;i<k;i++){
            for(m=i+1;m<k;m++){
                if(arr[i]>arr[m]){
                    temp=arr[m];
                    arr[m]=arr[i];
                    arr[i]=temp;
                    l++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",l);
    }
    return 0;
}
