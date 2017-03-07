#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,t;
    while(cin>>s)
    {
        int flag = 0;
        cin>>t;
        for(int i=0,j=0;i<t.length();i++)
        {
            if(t[i]==s[j])
            {
                j++;
                if(j==s.length())
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        s.clear();
        t.clear();
    }
    return 0;
}
