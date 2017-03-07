#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    vector<int>Graph[100000];
    int Color[10000];
    memset(Color,-1,sizeof(Color));
    int N,E,P;
    while(scanf("%d",&N)==1)
    {
        if(N == 0)
            break;
        cin>>E;
        for(int i=0;i<E;i++)
        {
            int x,y;
            cin>>x>>y;
            Graph[x].push_back(y);
            Graph[y].push_back(x);
        }

        queue<int>compare;
        int flag=0;
        Color[0]=0;
        compare.push(0);

        while(!compare.empty())
        {
            P=compare.front();
            compare.pop();
            int Size = Graph[P].size();

            for(int i=0;i<Size;i++)
            {
                if(Color[Graph[P][i]]==-1)
                {
                    if(Color[P] == 0)
                        Color[Graph[P][i]]=1;
                    else
                        Color[Graph[P][i]]=0;
                    compare.push(Graph[P][i]);
                }
                else
                {
                    if(Color[Graph[P][i]] == Color[P])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
            cout<<"NOT BICOLORABLE.n"<<endl;
        else
            cout<<"BICOLORABLE.n"<<endl;
    }
    return 0;
}
