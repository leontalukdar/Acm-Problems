#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

int cost[205][205];

void reset()
{
    memset(cost,0,sizeof cost);
}

int main()
{
    int n,r,scenario=0;
    while(cin>>n>>r &&n &&r)
    {
        reset();
        map<string,int>index;
        string ct1,ct2;
        int tcost,city=1;
        for(int i=0; i<r; i++)
        {
            cin>>ct1>>ct2>>tcost;
            if(!index[ct1])
                index[ct1]=city++;
            if(!index[ct2])
                index[ct2]=city++;
            cost[index[ct1]][index[ct2]]=cost[index[ct2]][index[ct1]]=tcost;
            ct1.clear();
            ct2.clear();
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                for(int k=1; k<=n; k++)
                {
                    cost[j][k]=cost[k][j]=max(cost[j][k],min(cost[j][i],cost[i][k]));
                }
            }
        }
        string source,destination;
        cin>>source>>destination;
        cout<<"Scenario #"<<++scenario<<endl;
        cout<<cost[index[source]][index[destination]]<<" tons"<<endl<<endl;
        index.clear();
    }
    return 0;
}
