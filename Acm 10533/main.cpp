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

int isDigPrime[1000005];
bool status[1000005];

int digitSum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void siv()
{
    int n=1000000;
    int sq=sqrt(n);
    for(int i=4;i<=n;i+=2)
        status[i]=1;
    for(int i=3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
                status[j]=1;
        }
    }
    status[1]=1;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(status[i]==0&&status[digitSum(i)]==0)
        {
            cnt++;
            //cout<<cnt<<" "<<i<<endl;
        }
        isDigPrime[i]=cnt;
    }
}

int main()
{
    siv();
    int n;
    cin>>n;
    int t1,t2;
    while(n--)
    {
        scanf("%d %d",&t1,&t2);
        printf("%d\n",isDigPrime[t2]-isDigPrime[t1-1]);
    }
    return 0;
}



