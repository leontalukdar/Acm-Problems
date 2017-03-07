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
#include <stack>
#include <cstring>
#include <ctype.h>

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

vector<int>v1;
vector<int>v2;
int dp[101][101];
bool taken[101][101];
int calSeq(int i,int j)
{
    if(i==v1.size()||j==v2.size())
        return 0;
    if(taken[i][j])
        return dp[i][j];
    int ans=0;
    if(v1[i]==v2[j])
        ans=1+calSeq(i+1,j+1);
    else
    {
        int val1=calSeq(i+1,j);
        int val2=calSeq(i,j+1);
        ans=max(val1,val2);
    }
    taken[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}

int main()
{
    int n,m,x,test=0;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        if(n==0 && m==0)
            break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            v1.pb(x);
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&x);
            v2.pb(x);
        }
        printf("Twin Towers #%d\n",++test);
        printf("Number of Tiles : %d\n\n",calSeq(0,0));
        v1.clear();
        v2.clear();
        clr(taken);
    }
    return 0;
}



