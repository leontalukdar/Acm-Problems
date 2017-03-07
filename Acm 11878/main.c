#include <stdio.h>
int main()
{
    int a,b,res,count=0,c;
    char ch1,ch2[100];
    while(gets(ch2))
    {
        if(sscanf(ch2,"%d%c%d=%d",&a,&ch1,&b,&c)!=4)
            continue;
        switch(ch1)
        {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        }
        if(res==c)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
