#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,j,sum,t;
    char ch[100000];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%3s-%d",ch,&sum);
        j=26*26*(ch[0]-'A')+26*(ch[1]-'A')+(ch[2]-'A');
        t=j-sum;
        if(t>=-100 && t<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
