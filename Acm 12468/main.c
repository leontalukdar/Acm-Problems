#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b))
    {
        if(a==(-1)&&b==(-1))
        break;
        if(a>b)
        c=a-b;
        else
        c=b-a;
        if(c>50)
        {
            c=100-c;
        }
        printf("%d\n",c);
    }
    return 0;
}
