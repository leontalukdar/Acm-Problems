#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;

vector<int> edges[35];

void reset()
{
    for(int i=0;i<35;i++)
    {
        edges[i].clear();
    }
}

int main()
{
    int a,testset=0;
    while(cin>>a)
    {
        testset++;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            edges[1].push_back(x);
            edges[x].push_back(1);
        }
        for(int i=2;i<=19;i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<x;j++)
            {
                int y;
                cin>>y;
                edges[i].push_back(y);
                edges[y].push_back(i);
            }
        }
        int n;
        cin>>n;
        cout<<"Test Set #"<<testset<<endl;
        while(n--)
        {
            int n1,n2,found=0;
            cin>>n1>>n2;
            int level[25];
            memset(level,0,sizeof(level));
            queue<int>q;
            q.push(n1);
            while(!q.empty())
            {
                int root=q.front();
                q.pop();
                for(int i=0;i<edges[root].size();i++)
                {
                    if(!level[edges[root][i]])
                        level[edges[root][i]]=level[root]+1;
                    if(edges[root][i]==n2)
                    {
                        found=1;
                        break;
                    }
                    q.push(edges[root][i]);
                }
                if(found)
                    break;
            }
            queue<int>empty;
            swap(q,empty);
            printf("%2d to %2d: %d\n",n1,n2,level[n2]);
        }
        cout<<endl;
        reset();
    }
    return 0;
}
