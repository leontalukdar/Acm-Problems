#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,ar[300000],i,sum,sum1,dif;
    cin>>t;
    while(t--)
    {
        sum=sum1=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        if(n%2==0)
        {
            for(i=0,dif=0;i<n;i++)
            {
                dif=ar[n/2]-ar[i];
                if(dif<0)
                    dif*=-1;
                sum+=dif;
            }
            for(i=0,dif=0;i<n;i++)
            {
                dif=ar[n/2-1]-ar[i];
                if(dif<0)
                    dif*=-1;
                sum1+=dif;
            }
            if(sum>=sum1)
                cout<<sum1<<endl;
            else
                cout<<sum<<endl;
        }
        else
        {
            for(i=0,dif=0;i<n;i++)
            {
                dif=ar[n/2]-ar[i];
                if(dif<0)
                    dif*=-1;
                sum+=dif;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
