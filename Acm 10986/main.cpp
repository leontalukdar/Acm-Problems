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

vector<int>graph[20005];
vector<int>cost[20005];
priority_queue<pii,vector<pii>,greater<pii> >serial;
int dist[20005];
bool visited[20005];

void initialize()
{
    for(int i=0;i<20005;i++)
    {
        dist[i]=INT_MAX;
        graph[i].clear();
        cost[i].clear();
    }
    clr(visited);
    priority_queue<pii,vector<pii>,greater<pii> >empty;
    swap(serial,empty);
}

int main()
{
    //freopen("output.txt","w",stdout);
    int N,n,m,s,t,x,y,z;
    cin>>N;
    for(int test=1;test<=N;test++)
    {
        cin>>n>>m>>s>>t;
        initialize();
        for(int j=0;j<m;j++)
        {
            cin>>x>>y>>z;
            graph[x].pb(y);
            graph[y].pb(x);
            cost[x].pb(z);
            cost[y].pb(z);
        }
        dist[s]=0;
        serial.push(mp(dist[s],s));
        visited[s]=true;
        while(!serial.empty())
        {
            pii temp=serial.top();
            //cout<<dist[temp.second]<<" "<<temp.first<<" "<<temp.second<<endl;
            serial.pop();
            for(int i=0;i<graph[temp.second].size();i++)
            {
                if(dist[temp.second]+cost[temp.second][i]<dist[graph[temp.second][i]])
                {
                    dist[graph[temp.second][i]]=dist[temp.second]+cost[temp.second][i];
                    serial.push(mp(dist[graph[temp.second][i]],graph[temp.second][i]));
                    visited[graph[temp.second][i]]=true;
                }
                //cout<<graph[temp.second][i]<<" "<<dist[graph[temp.second][i]]<<endl;
            }
            if(temp.second==t)
            {
                priority_queue<pii,vector<pii>,greater<pii> >empty;
                swap(serial,empty);
                break;
            }
        }
        if(dist[t]==INT_MAX)
            cout<<"Case #"<<test<<": unreachable"<<endl;
        else
            cout<<"Case #"<<test<<": "<<dist[t]<<endl;
    }
    return 0;
}



