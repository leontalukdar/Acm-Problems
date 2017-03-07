#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<string,int> psi;
typedef pair<int,string> pis;
typedef pair<string,string> pss;
#define reset(n) memset(n,-1,sizeof(n))
#define clr(n) memset(n,0,sizeof(n))
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define MAX 100005


//Normal Gcd
/*int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}*/

//Recursive Gcd
/*int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}*/

//moduler arithmetic
//ll M
/*ll bigmod(ll B,ll P)
{
    if(P==0)return 1;
    if(P%2==0)
    {
	ll ret=(bigmod(B,P/2))%M;
	return ((ret%M)*(ret%M))%M;
    }
    else
	return ((B%M)*(bigmod(B,P-1)%M))%M;
}*/
/*count trailing zeroes
ll findLastZeros(ll  n)
{
    ll countzero = 0;
    for (ll i=5; n/i>=1; i *= 5)
          countzero += n/i;
    return countzero;
}
*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={1,1,-1,-1};
//int fy[]={1,-1,1,-1};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

vector<int>graph[2600];
queue<int>nodes;
int level[2600];
bool visited[2600];

int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cin>>y;
            graph[i].pb(y);
        }
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int start;
        int boomsize=0,boomday=0;
        cin>>start;
        clr(visited);
        clr(level);
        queue<int>empty;
        swap(empty,nodes);
        nodes.push(start);
        visited[start]=true;
        level[start]=0;
        while(!nodes.empty())
        {
            int x1=nodes.front();
            nodes.pop();
            for(int i=0;i<graph[x1].size();i++)
            {
                if(!visited[graph[x1][i]])
                {
                    nodes.push(graph[x1][i]);
                    visited[graph[x1][i]]=true;
                    level[graph[x1][i]]=level[x1]+1;
                }
            }
            if(!nodes.empty())
            {
                if(level[x1]!=level[nodes.front()])
                {
                    if(nodes.size()>boomsize)
                    {
                        boomsize=nodes.size();
                        boomday=level[nodes.front()];
                    }
                }
            }
        }
        if(boomsize>0)
            cout<<boomsize<<" "<<boomday<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}



