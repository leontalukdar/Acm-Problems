#include <iostream>

using namespace std;

int main()
{
    int a,x,i,j=0;
    while(cin>>a>>x)
    {
       if(a==0 && x==0)
        break;
        j++;
        i=0;
        while(a>x)
        {
            a=a-x;
            i++;
            if(i>26)
                break;
        }
        if(i>26)
            cout<<"Case "<<j<<": "<<"impossible"<<endl;
        else
            cout<<"Case "<<j<<": "<<i<<endl;
    }
    return 0;
}
