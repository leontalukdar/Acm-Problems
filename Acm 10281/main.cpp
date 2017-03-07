#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string s;
    double dis = 0.0,time,diftime,newtime=0.0,hh,mm,ss,speed = 0.0;
    int flag,Count=0;
    while(getline(cin,s)!=0)
    {
        Count++;
        hh = mm = ss = diftime = 0.0;
        time = 0.0;
        for(unsigned int i=0; i<s.length(); i++)
        {
            while(i<s.length())
            {
                hh = hh * 10.0 + (s[i]-'0');
                i++;
                if(s[i] == ':')
                {
                    i++;
                    break;
                }
            }
            while(i<s.length())
            {
                mm = mm * 10.0 + (s[i]-'0');
                i++;
                if(s[i] == ':')
                {
                    i++;
                    break;
                }
            }
            while(i<s.length())
            {
                ss = ss * 10.0 + (s[i]-'0');
                i++;
                if(s[i] == ' ')
                {
                    i++;
                    flag = 1;
                    break;
                }
                else
                    flag = 0;
            }

                time = hh*3600.0 + mm*60.0 +ss;
                if(Count == 1)
                    newtime = time;
                diftime = time - newtime;
                dis += (diftime/3600.00) * speed;
                newtime = time;

            if(flag == 1)
                speed = 0.0;
            while(i<s.length())
            {
                speed = speed * 10.0 + (s[i]-'0');
                i++;
            }
        }
        if(flag == 0)
        {
            for(unsigned int i=0;i<s.length();i++)
            {
                if(s[i] == ' ')
                    break;
                else
                    cout<<s[i];
            }
            cout<<" "<<fixed<<setprecision(2)<<dis<<" km"<<endl;
        }
    s.clear();
    }
    return 0;
}
