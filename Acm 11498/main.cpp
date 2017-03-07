#include <iostream>

using namespace std;

int main()
{
    int x,y,t,n,m;
    while(cin>>t && t!=0)
    {
        cin>>n>>m;
        while(t--)
        {
            cin>>x>>y;
            if(x==n || y==m)
                cout<<"divisa"<<endl;
            else if(x>n && y>m)
                cout<<"NE"<<endl;
            else if(x<n && y>m)
                cout<<"NO"<<endl;
            else if(x<n && y<m)
                cout<<"SO"<<endl;
            else if(x>n && y<m)
                cout<<"SE"<<endl;
        }
    }
    return 0;
}
