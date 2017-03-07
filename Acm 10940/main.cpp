#include <iostream>

using namespace std;

int main()
{
    long int mod,res,i,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        i=1;
        while(i<=n)
            i=i*2;
        mod=i%n;
        res=n-mod;
        cout<<res<<endl;
    }
    return 0;
}
