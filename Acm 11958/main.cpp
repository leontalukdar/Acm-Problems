#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,cth,ctm,nb,ath,atm,tt,j,tct,tat,tm,ar[101];
    char c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>nb>>cth>>c>>ctm;
        tct=cth*60+ctm;
        for(j=0;j<nb;j++)
        {
            cin>>ath>>c>>atm>>tt;
            tat=ath*60+atm;
            if(tat<tct)
                tm=1440+tat-tct;
            else
                tm=tat-tct;
            ar[j]=tm+tt;
        }
        sort(ar,ar+nb);
        cout<<"Case "<<i<<": "<<ar[0]<<endl;
    }
    return 0;
}
