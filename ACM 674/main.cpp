#include <iostream>
#include <string.h>

using namespace std;

int coins[]={50,25,10,5,1};
int dp[6][7490];
int totalAmount;

int calWays(int i,int amount)
{
    if(i>=5)
    {
        if(amount==0)
            return 1;
        else
            return 0;
    }
    if(dp[i][amount]!=-1)
        return dp[i][amount];
    else
    {
        int way1=0,way2=0;
        if(amount-coins[i]>=0)
            way1 = calWays(i,amount-coins[i]);
        way2 = calWays(i+1,amount);
        dp[i][amount] = way1+way2;
        return dp[i][amount];
    }
}

int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>totalAmount)
    {

        int way = calWays(0,totalAmount);
        cout<<way<<endl;
    }
    return 0;
}
