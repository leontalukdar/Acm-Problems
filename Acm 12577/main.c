#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int len,i=0;
    while(1)
    {
        scanf("%s",ch);
        len=strlen(ch);
        if(ch[0]=='*'&& len==1)
            break;
        if(strcmp(ch,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++i);
        else
            printf("Case %d: Hajj-e-Asghar\n",++i);
    }
    return 0;
}
