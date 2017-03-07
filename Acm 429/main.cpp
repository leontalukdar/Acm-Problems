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

vector<string>v;
map<string,int>pos;
vector<int>graph[205];
bool visited[205];
queue<int>node;
int level[205];

void clearGraph()
{
    for(int i=0;i<205;i++)
        graph[i].clear();
}

void createGraph()
{
    string temp1,temp2;
    for(int i=0;i<v.size();i++)
    {
        temp1=v[i];
        for(int j=i+1;j<v.size();j++)
        {
            temp2=v[j];
            if(temp1.length()!=temp2.length())
                continue;
            int cnt=0;
            for(int k=0;k<temp1.size();k++)
            {
                if(temp1[k]!=temp2[k])
                    cnt++;
            }
            if(cnt==1)
            {
                graph[i].pb(j);
                graph[j].pb(i);
            }
        }
    }
}

void showGraph()
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"--->";
        for(int j=0;j<graph[i].size();j++)
            cout<<v[graph[i][j]]<<" ";
        cout<<endl;
    }
}

int main()
{
    //freopen("output.txt","w",stdout);
    int n;
    string s,target,start;
    cin>>n;
    getchar();
    for(int test=0;test<n;test++)
    {
        int cnt=0;
        v.clear();
        pos.clear();
        while(1)
        {
            cin>>s;
            if(s=="*")
                break;
            v.pb(s);
            pos[s]=cnt;
            cnt++;
        }
        clearGraph();
        createGraph();
        getchar();
        s.clear();
        while(1)
        {
            getline(cin,s);
            if(s.empty())
                break;
            int found=0;
            target.clear();
            start.clear();
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==' ')
                {
                    found=1;
                    continue;
                }
                if(found)
                    target+=s[i];
                else
                    start+=s[i];
            }
            found=0;
            clr(visited);
            clr(level);
            queue<int>empty;
            swap(node,empty);
            node.push(pos[start]);
            visited[pos[start]]=1;
            level[pos[start]]=0;
            while(!node.empty())
            {
                int x=node.front();
                node.pop();
                for(int i=0;i<graph[x].size();i++)
                {
                    if(!visited[graph[x][i]])
                    {
                        node.push(graph[x][i]);
                        visited[graph[x][i]]=1;
                        level[graph[x][i]]=level[x]+1;
                    }
                    if(v[graph[x][i]]==target)
                    {
                        found=1;
                        break;
                    }
                }
                if(found)
                {
                    queue<int>empty;
                    swap(node,empty);
                    break;
                }
            }
            //showGraph();
            cout<<start<<" "<<target<<" "<<level[pos[target]]<<endl;
        }
        if(test<n-1)
            cout<<endl;
    }
    return 0;
}



