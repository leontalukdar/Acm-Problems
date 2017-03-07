#include <iostream>
#include <cstring>
#include <iomanip>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int matrix[1005][1005];
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};

void reset()
{
    memset(matrix,0,sizeof matrix);
}

int main()
{
    int row,column;
    while(cin>>row>>column)
    {
        if(row==0 && column==0)
            break;
        int fault;
        cin>>fault;
        for(int i=0;i<fault;i++)
        {
            int tr,tc;
            cin>>tr>>tc;
            for(int j=0;j<tc;j++)
            {
                int x;
                cin>>x;
                matrix[tr][x]=1;
            }
        }
        int sr,sc,dr,dc,found=0;
        cin>>sr>>sc>>dr>>dc;
        int level[row+1][column+1];
        memset(level,0,sizeof level);
        queue<pair<int,int>>q;
        q.push(make_pair(sr,sc));
        while(!q.empty())
        {
            pair<int,int>source=q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int tx=source.first+fx[i];
                int ty=source.second+fy[i];
                if(ty>=0 && ty<column && tx>=0 && tx<row && !level[tx][ty] && !matrix[tx][ty])
                {
                    level[tx][ty]=level[source.first][source.second]+1;
                    if(tx==dr&&ty==dc)
                    {
                        found=1;
                        break;
                    }
                    q.push(make_pair(tx,ty));
                }
            }
            if(found)
                break;
        }
        if(sr==dr&&sc==dc)
            cout<<0<<endl;
        else
            cout<<level[dr][dc]<<endl;
        reset();
    }
    return 0;
}
