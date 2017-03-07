#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int64_t res,test,num;
    cin>>test;
    while(test--)
    {
        cin>>num;
        res=(-1+sqrt(1+4*2*num))/2;
        cout<<res<<endl;
    }
    return 0;
}
