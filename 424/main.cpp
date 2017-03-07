#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    string result = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
    while(getline(cin,s))
    {
        if(s.length() == 1 && s[0]=='0')
            break;
        unsigned int i=0;
        reverse(s.begin(),s.end());
        for(i=0; i<s.length(); i++)
        {
            int add = (s[i]-'0') + (result[i]-'0');
            int div = add/10;
            int mod = add % 10;
            result[i] = mod + '0';
            unsigned int j=i;
            while(div>0)
            {
                j++;
                result[j] = ((result[j]-'0') + div) + '0';
                div = (result[j]-'0')/10;
                result[j] = ((result[j] - '0') % 10) + '0';
            }
        }
        s.clear();
    }
    reverse(result.begin(),result.end());
    result.erase(0, result.find_first_not_of('0'));
    cout<<result<<endl;
    return 0;
}
