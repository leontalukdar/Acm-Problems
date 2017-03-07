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

//count trailing zeroes
/*ll findLastZeros(ll  n)
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


//Miller Robin Prime Check
/*ll power(ll x,ll y,ll p)
{
    ll res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y>>=1;
        x=(x*x)%p;
    }
    return res;
}

bool millerTest(ll d,ll n)
{
    ll a=2+rand()% (n-4);
    ll x=power(a,d,n);
    if(x==1 || x==n-1)
        return true;
    while(d!=n-1)
    {
        x=(x*x)%n;
        d*=2;
        if(x==1)return false;
        if(x==n-1)return true;
    }
}

bool isPrime(ll n)
{
    if(n==1 || n==4)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    ll d=n-1;
    while(d%2==0)
        d/=2;
    if(millerTest(d,n)==false)
        return false;
    return true;
}*/

bool isPrime(int n)
{
    if(n%2==0)
        return false;
    for(int i=3;i<=sqrt(n);i+=2)
        if(n%i==0)
            return false;
    return true;
}

int storePrime[100000]= {0};

int func(int n)
{
    return n*n+n+41;
}

int main()
{
    storePrime[0]=1;
    for(int i=1; i<=10001; i++)
    {
        if(isPrime(func(i)))
        {
            storePrime[i]++;
        }
        storePrime[i]+=storePrime[i-1];
    }
    int b,e;
    //ofstream file;
    //file.open("test.txt");
    while(scanf("%d %d",&b,&e)!=EOF)
    {
        //file<<fixed<<showpoint<<setprecision(2)<<double(storePrime[e]-storePrime[b-1])/double(e-b+1)*100.00000000001<<endl;
        printf("%.02lf\n",double((double(storePrime[e]-storePrime[b-1])/double(e-b+1))*100.00000000001));
    }
    //file.close();
    return 0;
}



