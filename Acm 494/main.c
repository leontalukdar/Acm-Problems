#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[10000];
    int len,i,j;
    while(gets(ch))
    {
        len=strlen(ch);
        i=0;
        j=0;
        while(i<len)
        {
            while(!isalpha(ch[i]))
                i++;
            if(i<len)
                j++;
            while(isalpha(ch[i]))
                i++;
        }
        printf("%d\n",j);
    }
    return 0;
}
