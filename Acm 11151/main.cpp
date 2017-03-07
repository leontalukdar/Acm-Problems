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

string s;

int dp1[256][256];
int dp2[1005][1005];

int calPal(int i,int j)
{
    int ret1=0,ret2=0,ret3=0,ret4=0;
    if(dp1[i][j]!=-1)
        return dp1[i][j];
    if(i==j)
        return 1;
    else if(i>j)
        return 0;
    if(s[i]==s[j])
    {
        ret1=2+calPal(i+1,j-1);
    }
    else
    {
        ret2=calPal(i,j-1);
        ret3=calPal(i+1,j);
        ret4=calPal(i+1,j-1);
    }
    dp1[i][j]=max(ret1,max(ret2,max(ret3,ret4)));
    return dp1[i][j];
}

int calLongPal(int i,int j)
{
    int ret1=0,ret2=0,ret3=0,ret4=0;
    if(dp2[i][j]!=-1)
        return dp2[i][j];
    if(i==j)
    {
        return 1;
    }
    else if(i>j)
        return 0;
    if(s[i]==s[j])
        ret1=2+calLongPal(i+1,j-1);
    else
    {
        ret2=calLongPal(i,j-1);
        ret3=calLongPal(i+1,j);
        ret4=calLongPal(i+1,j-1);
    }
    dp2[i][j]=max(ret1,max(ret2,max(ret4,ret3)));
    return dp2[i][j];
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        if(s.length()==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(s.length()>255)
        {
            reset(dp2);
            cout<<calLongPal(0,s.length()-1)<<endl;
        }
        else
        {
            reset(dp1);
            cout<<calPal(0,s.length()-1)<<endl;
        }
    }
    return 0;
}



