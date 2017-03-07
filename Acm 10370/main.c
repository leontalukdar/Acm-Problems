#include <stdio.h>
int main()
{
    int i,j,k,m,arr[1001];
    double dv,pr,n,l,o;
    while(scanf("%d",&i)==1){
        for(j=1;j<=i;j++){
            n=0;
            m=1;
            o=0;
            scanf("%d",&k);
            for(l=1;l<=k;l++){
                scanf("%d",&arr[m]);
                n=n+arr[m];
                m++;
            }
            dv=n/(l-1);
            for(m=1;m<=k;m++){
                if(arr[m]>dv)
                    o++;
                else
                    continue;
            }
            pr=(o*100)/(l-1);
            printf("%.3lf%c\n",pr,37);
        }
    }
    return 0;
}
