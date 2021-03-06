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
#define reset(n) memset(n,-1,sizeof(n))
#define clr(n) memset(n,0,sizeof(n))
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


struct node
{
    bool endMark;
    node *next[11];
    node()
    {
        endMark=false;
        for(int i=0;i<10;i++)
            next[i]=NULL;
    }
}*root;

void Insert(char *str,int len)
{
    node *cur=root;
    for(int i=0;i<len;i++)
    {
        int id=str[i]-'0';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
        cur=cur->next[id];
    }
    cur->endMark=true;
}

bool isConsistent(char *str,int len)
{
    node *cur=root;
    for(int i=0;i<len;i++)
    {
        int id=str[i]-'0';
        if(cur->next[id]==NULL)
            return false;
        if(i<len&&cur->endMark)
            return false;
        cur=cur->next[id];
    }
    return cur->endMark;
}

void del(node *cur)
{
    for(int i=0;i<10;i++)
    {
        if(cur->next[i])
            del(cur->next[i]);
    }
    delete(cur);
}

char s[10005][11];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int found=0;
        root=new node();
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            Insert(s[i],strlen(s[i]));
        }
        for(int i=0;i<n;i++)
        {
            if(!isConsistent(s[i],strlen(s[i])))
            {
                found=1;
                break;
            }
        }
        if(found)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        del(root);
    }
    return 0;
}
