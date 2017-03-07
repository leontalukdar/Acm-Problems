#include <iostream>
#include <cstring>
#include <iomanip>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int matrix[10][10];
int fx[]={1,1,2,2,-1,-1,-2,-2};
int fy[]={2,-2,-1,1,2,-2,1,-1};

void reset()
{
    memset(matrix,0,sizeof matrix);
}

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        if(a==b)
        {
            cout<<"To get from "<<a<<" to "<<b<<" takes "<<0<<" knight moves."<<endl;
            continue;
        }
        int srow=a[0]-'a';
        int scolum=a[1]-'0'-1;
        int drow=b[0]-'a';
        int dcolum=b[1]-'0'-1;
        int level[10][10];
        int found=0;
        memset(level,0,sizeof level);
        queue<pair<int,int>>q;
        q.push(make_pair(srow,scolum));
        while(!q.empty())
        {
            pair<int,int>source=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                int tx=source.first+fx[i];
                int ty=source.second+fy[i];
                if(tx>=0 && tx<8 && ty>=0 && ty<8 && !level[tx][ty])
                {
                    level[tx][ty]=level[source.first][source.second]+1;
                    if(tx==drow&&ty==dcolum)
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
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<level[drow][dcolum]<<" knight moves."<<endl;
        reset();
    }
    return 0;
}
