#include <iostream>
#include <string>
#include <algorithm>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int lenm=0,lenf=0;
        if(i == 0)
            getchar();
        getline(cin,s);
        lenm = count(s.begin(),s.end(),'M');
        lenf = count(s.begin(),s.end(),'F');
        s.clear();
        if(lenf == lenm && lenf>1 && lenm>1)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
    return 0;
}
