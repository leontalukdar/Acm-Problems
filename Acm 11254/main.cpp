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
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    vector<ll>v;
    ll n;
    while(cin>>n)
    {
        if(n<0)
            break;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i%2)
                    v.pb(i);
                if(i!=n/i&&(n/i)%2)
                    v.pb(n/i);
            }
        }
        ll lower,upper,x,y,dif=0,rangel,rangeu;
        for(int i=0;i<v.size();i++)
        {
            x=v[i];
            y=(2*n)/x;
            if(x>y)
                swap(x,y);
            ll u=y-x;
            upper=(ll)((sqrt(8*n+u*u)-1)/2);
            lower=(ll)((sqrt(1 + 4*upper*(upper+1) - 8*n )-1)/2);
            if(upper-lower>dif)
            {
                dif=abs(upper-lower);
                rangel=lower;
                rangeu=upper;
            }
        }
        cout<<n<<" = "<<rangel+1<<" + ... + "<<rangeu<<endl;
        v.clear();
    }
    return 0;
}



