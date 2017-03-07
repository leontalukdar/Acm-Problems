#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <ctype.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int n, Count[1000]= {0},Value[1000]= {0};
    cin>>n;
    getchar();
    for(int i=0; i<n; i++)
    {
        getline(cin,s);
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]>=97 && s[j]<=122)
            {
                Count[s[j]-97]++;
                Value[s[j]-97]++;
            }
            if(s[j]>=65 && s[j]<=90)
            {
                Count[s[j]-65]++;
                Value[s[j]-65]++;
            }
        }
    }
    sort(Value,Value+26);
    for(int j=25; j>=0; j--)
    {
        if(Value[j]>0)
        {
            for(int k=0; k<26; k++)
            {
                if(Value[j]==Count[k])
                {
                    printf("%c %d\n",k+65,Count[k]);
                    Count[k]=0;
                }
            }
        }
    }

    return 0;
}
