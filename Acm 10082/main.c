#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[]={"234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./"},a[10000];
    char ch2[]={"1234567890-QWERTYUIOP[\\ASDFGHJKL;ZXCVBNM,."};
    int i,j;
    while(gets(a))
    {
        for(i=0;a[i]!='\n';i++)
        {
            for(j=0;j<44;j++)
            {
                if(a[i]==' ')
                    i++;
                else if(a[i]==ch1[j])
                    a[i]=ch2[j];
                continue;
            }
        }
        puts(a);
    }
    return 0;
}
