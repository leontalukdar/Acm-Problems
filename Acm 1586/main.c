#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[85];
    int n,i;
    double sum,qu,z;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",ch);
        sum=qu=z=0.0;
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='N')
            {
                qu=14.01;
            }
            else if(ch[i]=='C')
            {
                qu=12.01;
            }
            else if(ch[i]=='O')
            {
                qu=16.00;
            }
            else if(ch[i]=='H')
            {
                qu=1.008;
            }
            else
            {
                if(ch[i+1]>='0' && ch[i+1]<='9')
                {
                    z=qu;
                    qu=qu*((ch[i]-'0')*10.00+(ch[i+1]-'0'));
                    qu=qu-z;
                    i++;
                }
                else
                {
                    z=qu;
                    qu=qu*(ch[i]-'0');
                    qu=qu-z;
                }
            }
            sum+=qu;
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}
