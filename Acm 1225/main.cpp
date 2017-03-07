#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <sstream>

using namespace std;

int main()
{
    int Case,n,i,j;
    unsigned int k;
    int zero,one,two,three,four,five,six,seven,eight,nine;
    string s;
    cin>>Case;
    for(i=0;i<Case;i++)
    {
        zero=one=two=three=four=five=six=seven=eight=nine=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            stringstream ss;
            ss << j;
            s = ss.str();
            for(k=0;k<s.length();k++)
            {
                switch(s[k]-'0')
                {
                case 0:
                    zero++;
                    break;
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 4:
                    four++;
                    break;
                case 5:
                    five++;
                    break;
                case 6:
                    six++;
                    break;
                case 7:
                    seven++;
                    break;
                case 8:
                    eight++;
                    break;
                case 9:
                    nine++;
                    break;
                }
            }
            s.clear();
            ss.clear();
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine);
    }
    return 0;
}
