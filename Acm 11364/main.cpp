#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t,n,ans,i;
    int arr[25]={0};
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr + n);
        ans = 2*(arr[n-1]-arr[0]);
        cout<<ans<<endl;
    }
    return 0;
}
