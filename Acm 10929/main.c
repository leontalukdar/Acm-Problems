#include <stdio.h>
#include <string.h>
int main()
{
    char num[10000];
    int i,j,c,d,e,len;
    while(1)
    {
        len=c=d=0;
        scanf("%s",num);
        len=strlen(num);
        if(num[0]=='0'&&len==1)
            break;
        for(i=0;i<len;i=i+2)
            c+=num[i]-'0';
        for(j=1;j<len;j=j+2)
            d+=num[j]-'0';
        e=c-d;
        if(e%11==0)
            printf("%s is a multiple of 11.\n",num);
        else
            printf("%s is not a multiple of 11.\n",num);
    }
    return 0;
}
