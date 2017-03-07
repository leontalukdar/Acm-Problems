#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    long int ar[10005],i=0,j;
    while(scanf("%ld",&j)!=EOF)
    {
        ar[i]=j;
        i++;
        sort(ar,ar+i);
        if(i%2!=0)
        {
            cout<<ar[i/2]<<endl;
        }
        else
        {
            cout<<(ar[i/2]+ar[i/2-1])/2<<endl;
        }
    }
    return 0;
}
