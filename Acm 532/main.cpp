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

bool visited[31][31][31];
int level[31][31][31];
char ch[31][31][31];
queue<int>node;

int main()
{
    //freopen("target.txt","w",stdout);
    int l,r,c;
    while(cin>>l>>r>>c)
    {
        int x,y,z;
        int found=0;
        if(l==0&&r==0&&c==0)
            break;
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<r;j++)
            {
                for(int k=0;k<c;k++)
                {
                    cin>>ch[i][j][k];
                    if(ch[i][j][k]=='S')
                    {
                        x=i;
                        y=j;
                        z=k;
                    }
                }
            }
            getchar();
        }
        queue<int>empty;
        swap(empty,node);
        node.push(x);
        node.push(y);
        node.push(z);
        clr(level);
        clr(visited);
        level[x][y][z]=0;
        visited[x][y][z]=true;
        while(!node.empty())
        {
            x=node.front();
            node.pop();
            y=node.front();
            node.pop();
            z=node.front();
            node.pop();
            if(ch[x][y][z]=='E')
            {
                queue<int>empty;
                swap(empty,node);
                found=1;
                //cout<<1000<<endl;
                break;
            }
            if(ch[x][y][z-1]!='#'&&!visited[x][y][z-1]&&z-1>=0)
            {
                node.push(x);
                node.push(y);
                node.push(z-1);
                level[x][y][z-1]=level[x][y][z]+1;
                visited[x][y][z-1]=true;
            }
            if(ch[x][y][z+1]!='#'&&!visited[x][y][z+1]&&z+1<c)
            {
                node.push(x);
                node.push(y);
                node.push(z+1);
                level[x][y][z+1]=level[x][y][z]+1;
                visited[x][y][z+1]=true;
            }
            if(ch[x][y-1][z]!='#'&&!visited[x][y-1][z]&&y-1>=0)
            {
                node.push(x);
                node.push(y-1);
                node.push(z);
                level[x][y-1][z]=level[x][y][z]+1;
                visited[x][y-1][z]=true;
            }
            if(ch[x][y+1][z]!='#'&&!visited[x][y+1][z]&&y+1<r)
            {
                node.push(x);
                node.push(y+1);
                node.push(z);
                level[x][y+1][z]=level[x][y][z]+1;
                visited[x][y+1][z]=true;
            }
            if(ch[x-1][y][z]!='#'&&!visited[x-1][y][z]&&x-1>=0)
            {
                node.push(x-1);
                node.push(y);
                node.push(z);
                level[x-1][y][z]=level[x][y][z]+1;
                visited[x-1][y][z]=true;
            }
            if(ch[x+1][y][z]!='#'&&!visited[x+1][y][z]&&x+1<l)
            {
                node.push(x+1);
                node.push(y);
                node.push(z);
                level[x+1][y][z]=level[x][y][z]+1;
                visited[x+1][y][z]=true;
            }
        }
        if(found)
            cout<<"Escaped in "<<level[x][y][z]<<" minute(s)."<<endl;
        else
            cout<<"Trapped!"<<endl;
    }
    return 0;
}



