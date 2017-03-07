#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int i,len;
    while(scanf("%s",ch)!=EOF)
    {
        len=strlen(ch);
        for(i=0;i<len;i++)
        {
            if(ch[i]>=65 && ch[i]<=90)
            {
                if(ch[i]=='A' || ch[i]== 'B' || ch[i]=='C')
                    ch[i]=2+'0';
                if(ch[i]=='D' || ch[i]== 'E' || ch[i]=='F')
                    ch[i]=3+'0';
                if(ch[i]=='G' || ch[i]== 'H' || ch[i]=='I')
                    ch[i]=4+'0';
                if(ch[i]=='J' || ch[i]== 'K' || ch[i]=='L')
                    ch[i]=5+'0';
                if(ch[i]=='M' || ch[i]== 'N' || ch[i]=='O')
                    ch[i]=6+'0';
                if(ch[i]=='P' || ch[i]== 'R' || ch[i]=='S' || ch[i]=='Q')
                    ch[i]=7+'0';
                if(ch[i]=='T' || ch[i]== 'U' || ch[i]=='V')
                    ch[i]=8+'0';
                if(ch[i]=='W' || ch[i]== 'X' || ch[i]=='Y' || ch[i]=='Z')
                    ch[i]=9+'0';
            }
        }
        printf("%s\n",ch);
    }
    return 0;
}
