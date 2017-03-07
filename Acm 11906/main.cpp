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

int ar[105][105];
int r,c,m,n,w,x,y;


int main()
{
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
        cin>>r>>c>>m>>n>>w;
        clr(ar);
        for(int i=0;i<w;i++)
        {
            cin>>x>>y;
            ar[x][y]=-1;
        }
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(ar[i][j]==-1)
                    continue;
                int x1,y1,x2,y2,x3,y3,x4,y4;
                x1=i-m;
                y1=j+n;
                x2=i-n;
                y2=j+m;
                x3=i+m;
                y3=j+n;
                x4=i+n;
                y4=j+m;
                if(x1>=1 && y1<=c)
                {
                    if(ar[x1][y1]!=-1)
                    {
                        ar[x1][y1]++;
                        ar[i][j]++;
                    }
                }
                if(x2>=1 && y2<=c)
                {
                    if(ar[x2][y2]!=-1)
                    {
                        ar[x2][y2]++;
                        ar[i][j]++;
                    }
                }
                if(x3<=r && y3<=c)
                {
                    if(ar[x3][y3]!=-1)
                    {
                        ar[x3][y3]++;
                        ar[i][j]++;
                    }
                }
                if(x4<=r && y4<=c)
                {
                    if(ar[x4][y4]!=-1)
                    {
                        ar[x4][y4]++;
                        ar[i][j]++;
                    }
                }
            }
        }
        int even=0,odd=0;

        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(ar[i][j]>0)
                {
                    if(ar[i][j]%2)
                        odd++;
                    else
                        even++;
                }
            }
        }
        cout<<"Case "<<test<<": "<<even<<" "<<odd<<endl;
    }
    return 0;
}



