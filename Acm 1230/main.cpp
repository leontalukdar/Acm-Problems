#include <iostream>

using namespace std;

#define lld long long int

lld long_mod(lld x,lld y,lld z)
{
    lld r=1;
    while(y!=0)
    {
        if(y%2==1)
            r=(r*x)%z;
        x=(x*x)%z;
        y/=2;
    }
    return r;
}

int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        lld x,y,n;
        cin>>x>>y>>n;
        cout<<long_mod(x,y,n)<<endl;
    }
    return 0;
}
