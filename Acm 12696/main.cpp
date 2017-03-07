#include <iostream>
using namespace std;
int main()
{
    int t,flag=0,i=0;
    double length=56.0,width=45.0,depth=25.0,weight=7.00,lt,wd,dp,wg;
    cin>>t;
    while(t--)
    {
        cin>>lt>>wd>>dp>>wg;
        if(((lt+wd+dp)<=125 || (lt<=length && wd<=width && dp<=depth))&&wg<=weight)
        {
            flag=1;
            i++;
        }
        else
            flag=0;
        cout<<flag<<endl;
    }
    cout<<i<<endl;
    return 0;
}
