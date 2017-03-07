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

ll matrix[22];
ll dp[22][10000];

void resetdp()
{
    memset(dp,-1,sizeof dp);
}

void resetmat()
{
    for(int i=0;i<21;i++)
        matrix[i]=pow(i+1,3);
}

ll countway(ll i,ll amount)
{
    if(i>=21)
    {
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1)return dp[i][amount];
    ll ret1=0,ret2=0;
    if(amount-matrix[i]>=0)
        ret1=countway(i,amount-matrix[i]);
    ret2=countway(i+1,amount);
    return dp[i][amount]=ret1+ret2;
}

int main()
{
    ll make;
    resetdp();
    resetmat();
    while(cin>>make)
    {
        cout<<countway(0,make)<<endl;
    }
    return 0;
}



