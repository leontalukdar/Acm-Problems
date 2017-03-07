#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int i,sum,len,flag;
    while(scanf("%s",ch)!=EOF)
    {
        flag=0;
        len=strlen(ch);
        for(i=0,sum=0;i<len;i++)
        {
            if(ch[i]>=65 && ch[i]<=90)
                sum+=(ch[i]-38);
            if(ch[i]>=97 && ch[i]<=122)
                sum+=(ch[i]-96);
        }
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
            printf("It is a prime word.\n");
        if(flag==1)
            printf("It is not a prime word.\n");

    }
    return 0;
}
