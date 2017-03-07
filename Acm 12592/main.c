#include <stdio.h>
#include <string.h>
struct slogan
{
    char first[105];
    char second[105];
};
int main()
{
    int n,q,i,j;
    char s[105];
    scanf("%d",&n);
    while(getchar()!='\n');
    struct slogan ch[n];
    for(i=0;i<n;i++)
    {
        gets(ch[i].first);
        gets(ch[i].second);
    }
    scanf("%d",&q);
    while(getchar()!='\n');
    for(i=0;i<q;i++)
    {
        gets(s);
        for(j=0;j<n;j++)
        {
            if(strcmp(ch[j].first,s)==0)
                puts(ch[j].second);
        }
    }
    return 0;
}
