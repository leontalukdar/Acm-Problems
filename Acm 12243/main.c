#include <stdio.h>
#include <string.h>
int main()
{
    int i,len,flag,n;
    char str[10000];
    while(gets(str))
    {
        flag=0,n=0;
        len=strlen(str);
        if(str[0]=='*' && len==1)
            break;
        for(i=0;i<len;i++)
        {
            if(str[0]>=65 && str[0]<=90)
            {
                if(str[i]==' ')
                {
                    n++;
                    i++;
                    if(str[0]==str[i] || str[0]==(str[i]-32))
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(str[0]>=97 && str[0]<=122)
            {
                if(str[i]==' ')
                {
                    n++;
                    i++;
                    if(str[0]==str[i] || str[0]==(str[i]+32))
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==0 && n!=0)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
