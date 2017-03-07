#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <cstring>
#include <ctype.h>

#define ll long long int
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define PI acos(-1.0)

using namespace std;

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

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int vis[30];
vector<int>adj[30];

void dfs(int node)
{
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++)
    {
        if(!vis[adj[node][i]])
            dfs(adj[node][i]);
    }
    return;
}
int main()
{
    int tc;
    char s[3];
    cin>>tc;
    scanf("\n");
    while(tc--)
    {
        gets(s);
        int n=s[0]-'A';
        memset(vis,0,sizeof vis);
        for(int i=0;i<=n;i++)
            adj[i].clear();
        while(gets(s) && s[0])
        {
            adj[s[0]-'A'].pb(s[1]-'A');
            adj[s[1]-'A'].pb(s[0]-'A');
        }
        int cnt=0;
        for(int i=0;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                cnt++;
            }
        }
        cout<<cnt<<endl;
        if(tc)
            cout<<endl;

    }
    return 0;
}



