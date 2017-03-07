#include <stdio.h>
int main()
{
    int i=0,j,k=0,l=0,arr[10000][2]={0};
    while(scanf("%d",&j)!=EOF){
        for(i=0,l=0;i<=k;i++){
            if(j==arr[i][0]){
                arr[i][1]++;
                l=1;
            }
        }
        if(!l){
            arr[k][0]=j;
            arr[k][1]++;
            k++;
        }
    }
    for(i=0;i<k;i++)
        printf("%d %d\n",arr[i][0],arr[i][1]);
    return 0;
}
