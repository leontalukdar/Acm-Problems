#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n,MAX=0,temp;
    long int arr[101][101],sum[101][101];
    memset(sum,0,sizeof(sum));
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>arr[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=i;k++)
                for(int l=1;l<=j;l++)
                {
                    sum[i][j]+=arr[k][l];
                }

    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
            for(int k=0;k<=i;k++)
                for(int l=0;l<=j;l++)
                {
                    temp = sum[i][j]-sum[i][l]-sum[k][j]+sum[k][l];
                    if(temp>MAX)
                        MAX = temp;
                }

    cout<<MAX<<endl;
    return 0;
}
