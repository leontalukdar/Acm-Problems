#include <stdio.h>
#include <string.h>
int main()
{
    char ch[7];
    int i,n;
    scanf("%d",&n);
    while(getchar()!='\n');
    for(i=1;i<=n;i++)
    {
        gets(ch);
        if(strlen(ch)==5)
            printf("3\n");
        else if((ch[0]=='o' && ch[1]=='n')||(ch[0]=='o'&& ch[1]=='e')||(ch[0]=='o'&&ch[2]=='e')||(ch[0]=='o' && ch[2]=='n')||(ch[1]=='n' && ch[2]=='e'))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
