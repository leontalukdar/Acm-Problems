#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,i,j,b,a;
    char ch[100][200];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",ch[i]);
    char s[100][100]={"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    b=ceil(n/16)+1;
    for(j=0,i=0,a=0;j<16*b;j++,i++,a++)
    {
        if(i==n)
            i=0;
        if(a==16)
            a=0;
        printf("%s: %s\n",ch[i],s[a]);
    }
    return 0;
}
