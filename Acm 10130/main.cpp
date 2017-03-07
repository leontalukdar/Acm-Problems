#include <iostream>
#include <fstream>
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

using namespace std;

typedef long long int ll;
typedef pair<int,int> pii;
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)

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

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int dp[1005][105];
int n,cap;
int weight[1005];
int cost[1005];

void reset()
{
    memset(dp,-1,sizeof dp);
}

int maxprofit(int i,int w)
{
    if(i==n) return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int profit1;
    if(w+weight[i]<=cap)
        profit1=cost[i]+maxprofit(i+1,w+weight[i]);
    else
        profit1=0;
    int profit2=maxprofit(i+1,w);
    return dp[i][w]=max(profit1,profit2);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>cost[i]>>weight[i];
        }
        int group,ans=0;
        cin>>group;
        while(group--)
        {
            reset();
            cin>>cap;
            ans+=maxprofit(0,0);
        }
        cout<<ans<<endl;
    }
    return 0;
}



