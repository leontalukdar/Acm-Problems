#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int coconuts,people=0,monkey=1,remain,flag=0,div;
    while(cin>>coconuts)
    {
        if(coconuts<0)
            break;
        for(people=sqrt(coconuts-1)+1;people>1;people--)
        {
            if(coconuts%people==1)
            {
                int temppe=people;
                int tempco=coconuts;
                while(temppe--)
                {
                    div=tempco/people;
                    remain = tempco%people;
                    if(remain!=1)
                    {
                        flag=0;
                        break;
                    }
                    else
                        flag=1;
                    tempco = tempco-div-1;
                }
                if(tempco%people!=0)
                    continue;
            }
            else
                continue;
            if(flag==1)
                break;
        }
        if(people==1||people==0)
            cout<<coconuts<<" coconuts, no solution"<<endl;
        else
            cout<<coconuts<<" coconuts, "<<people<<" people and "<<monkey<<" monkey"<<endl;
    }
    return 0;
}
