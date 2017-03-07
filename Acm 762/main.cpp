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

map<string,int>si;
map<int,string>is;
vector<int>graph[10000];
queue<int>node;
map<int,int>parent;
bool visited[10000];
vector<string>v;

void vclear()
{
    for(int i=0;i<1000;i++)
        graph[i].clear();
}

int main()
{
    //freopen("example.txt","w",stdout);
    int n;
    string x1,x2;
    int col=0;
    while(cin>>n)
    {
        if(col>0)
            cout<<endl;
        col++;
        si.clear();
        parent.clear();
        v.clear();
        vclear();
        clr(visited);
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            cin>>x1>>x2;
            if(!si[x1])
            {
                si[x1]=cnt;
                is[cnt]=x1;
                cnt++;
            }
            if(!si[x2])
            {
                si[x2]=cnt;
                is[cnt]=x2;
                cnt++;
            }
            graph[si[x1]].pb(si[x2]);
            graph[si[x2]].pb(si[x1]);
        }
        cin>>x1>>x2;
        node.push(si[x1]);
        visited[si[x1]]=true;
        while(!node.empty())
        {
            int found=0;
            int cur=node.front();
            node.pop();
            for(int i=0;i<graph[cur].size();i++)
            {
                if(!visited[graph[cur][i]])
                {
                    node.push(graph[cur][i]);
                    visited[graph[cur][i]]=true;
                    parent[graph[cur][i]]=cur;
                    if(graph[cur][i]==si[x2])
                    {
                        found=1;
                    }
                }
                if(found)
                    break;
            }
        }
        queue<int>empty;
        swap(node,empty);
        if(!parent[si[x2]])
            cout<<"No route"<<endl;
        else
        {
            int a=si[x2];
            while(a!=si[x1])
            {
                v.pb(is[a]);
                v.pb(is[parent[a]]);
                a=parent[a];
            }
            for(int i=v.size()-1;i>=0;i-=2)
            {
                cout<<v[i]<<" "<<v[i-1]<<endl;
            }
        }
        getchar();
    }
    return 0;
}



