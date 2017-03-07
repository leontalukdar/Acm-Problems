#include <stdio.h>
int main()
{
    long int s,b,i=0;
    while(scanf("%ld %ld",&b,&s)==2)
    {
        if(b==0 && s==0)
            break;
        if(b==0)
            printf("Case %ld: :-\\n",++i);
        else
        {
            if(b==s)
                printf("Case %ld: :-|\n",++i);
            if(b>s)
                printf("Case %ld: :-(\n",++i);
            if(b<s)
                printf("Case %ld: :-)\n",++i);
        }
    }
    return 0;
}
