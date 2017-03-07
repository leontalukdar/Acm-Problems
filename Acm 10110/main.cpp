#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long int n;
    while(cin>>n && n!=0)
    {
        if(floor(sqrt(n))==ceil(sqrt(n)))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
