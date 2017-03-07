#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    int len,t,i;
    string s;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            cin>>s;
            len=s.size();
            if(s=="1"||s=="4"||s=="78")
                printf("+\n");
            else if(s[len-1]=='5' && s[len-2]=='3')
                printf("-\n");
            else if(s[0]=='9' && s[len-1]=='4')
                printf("*\n");
            else
                printf("?\n");
        }
    }
    return 0;
}
