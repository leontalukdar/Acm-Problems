#include <stdio.h>
int main()
{
    int i=1;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"' && i%2==1)
        {
            printf("``");
            i++;
        }
        else if(ch=='"' && i%2==0)
        {
            printf("''");
            i++;
        }
        else
            printf("%c",ch);
    }
    return 0;
}
