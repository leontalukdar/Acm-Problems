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
ll bigmod(ll B,ll P,ll M)
{
    if(P==0)return 1;
    if(P%2==0)
    {
        ll ret=bigmod(B,P/2,M);
        return ((ret%M)*(ret%M))%M;
    }
    else
        return ((B%M)*(bigmod(B,P-1,M)%M))%M;
}

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m)
    {
        if(p==0 && m==1)
            cout<<0<<endl;
        else
            cout<<bigmod(b,p,m)<<endl;
    }
    return 0;
}



