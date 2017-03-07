#include <stdio.h>
#include <string.h>
int main()
{
    int n,total=0,donate;
    char ch[100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",ch);
        if(strcmp(ch,"donate")==0)
        {
            scanf("%d",&donate);
            total+=donate;
        }
        else
            printf("%d\n",total);
    }
    return 0;
}
