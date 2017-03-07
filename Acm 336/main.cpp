#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int edges[35][35];

void reset()
{
    for(int i=0;i<35;i++)
        memset(edges[i],0,sizeof(edges[i]));
}

int main()
{
    int nc,casecount=0;
    while(cin>>nc && nc)
    {
        map<int,int>nodes;
        reset();
        int numberofnodes=0;
        for(int i=0;i<nc;i++)
        {
            int a,b;
            cin>>a>>b;
            if(!nodes[a])
                nodes[a]=++numberofnodes;
            if(!nodes[b])
                nodes[b]=++numberofnodes;
            edges[nodes[a]][nodes[b]]=edges[nodes[b]][nodes[a]]=1;
        }
        int node,ttl;
        while(cin>>node>>ttl)
        {
            if(node==0&&ttl==0)
                break;
            queue<int>q;
            int visit[35];
            memset(visit,-1,sizeof(visit));
            q.push(nodes[node]);
            visit[nodes[node]]=0;
            while(!q.empty())
            {
                int source=q.front();
                q.pop();
                for(int i=1;i<=numberofnodes;i++)
                {
                    if(edges[source][i]&&visit[i]==-1)
                    {
                        visit[i]=visit[source]+1;
                        q.push(i);
                    }
                }
            }
            int unvisitnodes=0;
            for(int i=1;i<=numberofnodes;i++)
            {
                if(visit[i]==-1||visit[i]>ttl)
                    unvisitnodes++;
            }
            cout<<"Case "<<++casecount<<": "<<unvisitnodes<<" nodes not reachable from node "<<node<<" with TTL = "<<ttl<<"."<<endl;
        }
    }
    return 0;
}
