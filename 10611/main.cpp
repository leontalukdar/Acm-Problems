#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long Min,Max,flag1,flag2;
    long long number[50001];
    long long query[50001];
    long long n,q;
    cin>>n;
    for(long long i=0; i<n; i++)
        cin>>number[i];
    cin>>q;
    for(long long i=0; i<q; i++)
        cin>>query[i];
    for(long long i=0; i<q; i++)
    {
        flag1 = flag2 = 0;
        for(long long j=0; j<n; j++)
        {
            if(number[j]<query[i])
            {
                Min = number[j];
                flag1 = 1;
            }
            else if(number[j]>query[i])
            {
                Max = number[j];
                flag2 = 1;
                break;
            }
        }
        if(flag1 == 0 && flag2!=0)
            cout<<'X'<<" "<<Max<<endl;
        else if(flag2 == 0 && flag1 !=0)
            cout<<Min<<" "<<'X'<<endl;
        else if(flag2 ==0 && flag1 == 0)
            cout<<'X'<<" "<<'X'<<endl;
        else
            cout<<Min<<" "<<Max<<endl;
    }
    return 0;
}
