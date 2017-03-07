#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char num[500];
    unsigned long skew, len,i,j,k;
    while(gets(num))
    {
        skew=0;
        len=strlen(num);
        if(len==1 && num[0]=='0')
            break;
        for(i=0;i<len;i++)
        {
            j=(num[i]-48);
            k=len-i;
            skew+=j*(pow(2,k)-1);
        }
        printf("%lu\n",skew);
    }
    return 0;
}
