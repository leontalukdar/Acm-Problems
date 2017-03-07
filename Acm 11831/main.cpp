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

map<char,map<char,char> >directons;

void initialize()
{
    directons['N']['D']='L';
    directons['N']['E']='O';
    directons['O']['D']='N';
    directons['O']['E']='S';
    directons['S']['D']='O';
    directons['S']['E']='L';
    directons['L']['D']='S';
    directons['L']['E']='N';
}

char ch[105][105];


int main()
{
    initialize();
    ll n,m,s;
    string str;
    while(1)
    {
        cin>>n>>m>>s;
        ll cnt=0,x,y;
        if(n==0 && m==0 && s==0)
            break;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j]=='N'||ch[i][j]=='S'||ch[i][j]=='O'||ch[i][j]=='L')
                {
                    x=i;
                    y=j;
                }
            }
        }
        cin>>str;
        char temp=ch[x][y];
        ch[x][y]='.';
        //cout<<temp<<endl;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='D'||str[i]=='E')
                temp=directons[temp][str[i]];
            //cout<<str[i]<<" "<<temp<<" "<<x<<" "<<y<<endl;
            if(str[i]=='F')
            {
                if(temp=='N')
                {
                    if(x>0)
                    {
                        if(ch[x-1][y]=='*')
                        {
                            cnt++;
                            ch[x-1][y]='.';
                            x-=1;
                        }
                        else if(ch[x-1][y]=='.')
                        {
                            x-=1;
                        }
                        else
                            continue;
                    }
                }
                else if(temp=='S')
                {
                    if(x<n-1)
                    {
                        if(ch[x+1][y]=='*')
                        {
                            cnt++;
                            ch[x+1][y]='.';
                            x+=1;
                        }
                        else if(ch[x+1][y]=='.')
                        {
                            x+=1;
                        }
                        else
                            continue;
                    }
                }
                else if(temp=='O')
                {
                    if(y>0)
                    {
                        if(ch[x][y-1]=='*')
                        {
                            cnt++;
                            ch[x][y-1]='.';
                            y-=1;
                        }
                        else if(ch[x][y-1]=='.')
                        {
                            y-=1;
                        }
                        else
                            continue;
                    }
                }
                else if(temp=='L')
                {
                    if(y<m-1)
                    {
                        if(ch[x][y+1]=='*')
                        {
                            cnt++;
                            ch[x][y+1]='.';
                            y+=1;
                        }
                        else if(ch[x][y+1]=='.')
                        {
                            y+=1;
                        }
                        else
                            continue;
                    }
                }
            }
        }
        //cout<<temp<<" "<<x<<" "<<y<<endl;
        cout<<cnt<<endl;
    }
    return 0;
}



