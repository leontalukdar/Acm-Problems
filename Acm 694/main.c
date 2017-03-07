#include <stdio.h>
#include <stdlib.h>
int main()
{
    long l,d,c,a;
    int no=0;
    while(scanf("%ld %ld",&l,&d)==2)
    {
        if(l<0&&d<0)
        break;
        c=0;
        a=l;
        while(l<=d)
        {
            if(l==1)
            {
                c++;
                break;
            }
            else if(l%2==0)
            {
                c++;
                l/=2;
            }
            else if(l%2==1)
            {
                c++;
                l=l*3+1;
            }
        }
        printf("Case %d: A = %ld, limit = %ld, number of terms = %ld\n",
            ++no,a,d,c);
    }
    return 0;
}
