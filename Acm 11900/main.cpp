#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,en,men,mew,i,j,count,ar[50];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>en>>men>>mew;
        for(j=0;j<en;j++)
            cin>>ar[j];
        sort(ar,ar+en);
        for(j=0,count=0;j<min(en,men);j++)
        {
            mew-=ar[j];
            if(mew>=0)
                count++;
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }
    return 0;
}
