#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    string s,temp;
    int pali,miro,flag;
    char fix[21][2] = {{'A','A'},
                       {'E','3'},
                       {'H','H'},
                       {'I','I'},
                       {'J','L'},
                       {'K','J'},
                       {'M','M'},
                       {'O','O'},
                       {'S','2'},
                       {'T','T'},
                       {'U','U'},
                       {'V','V'},
                       {'W','W'},
                       {'X','X'},
                       {'Y','Y'},
                       {'Z','5'},
                       {'1','1'},
                       {'2','S'},
                       {'3','E'},
                       {'5','Z'},
                       {'8','8'}
                        };

    while(getline(cin,s) != 0)
    {
        pali=miro=0;
        flag = 0;
        int flen=0,llen;
        llen = s.length()-1;
        temp = s;
        reverse(temp.begin(),temp.end());
        if(temp.compare(s) == 0)
            pali = 1;
        else
            pali = 0;
        if(s.length()%2 != 0)
        {
            for(int i=0;i<21;i++)
            {
                if(s.at((s.length()-1)/2)==fix[i][0])
                {
                    if(fix[i][0]==fix[i][1])
                        flag = 1;
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        while(llen>=flen && ((s.length()%2 != 0 && flag==1) || (s.length() %2 == 0))){
            for(int i=0;i<21;i++)
            {
                if(s.at(llen) == fix[i][0])
                {
                    if(s.at(flen) == fix[i][1])
                        miro = 1;
                    else
                    {
                        miro = 0;
                        break;
                    }
                }
            }
            if(miro == 0)
                break;
            llen--;
            flen++;
        }
        if(pali == 0 && miro == 0)
            cout<<s<<" -- is not a palindrome."<<endl<<endl;
        if(pali == 1 && miro == 0)
            cout<<s<<" -- is a regular palindrome."<<endl<<endl;
        if(pali == 0 && miro == 1)
            cout<<s<<" -- is a mirrored string."<<endl<<endl;
        if(pali == 1 && miro == 1)
            cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
        s.clear();
    }
    return 0;
}
