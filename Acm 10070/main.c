#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char yr[1000001];
    int rm4,rm100,rm400,rm15,rm55,i,flag1,flag2,flag3,l,cnt=0;
    while(scanf("%s",yr)==1)
    {
        l=strlen(yr);
        rm4=rm100=rm400=rm15=rm55=flag1=flag2=flag3=0;n
        if(cnt>0)
            printf("\n");
        cnt++;
        for(i=0;i<l;i++)
        {
            rm4=(rm4*10+(yr[i]-'0'))%4;
            rm100=(rm100*10+(yr[i]-'0'))%100;
            rm400=(rm400*10+(yr[i]-'0'))%400;
            rm15=(rm15*10+(yr[i]-'0'))%15;
            rm55=(rm55*10+(yr[i]-'0'))%55;
        }
        if((!rm4 && rm100)||!rm400)
        {
            printf("This is leap year.\n");
            flag1=1;
        }
        if(!rm15)
        {
            printf("This is huluculu festival year.\n");
            flag2=1;
        }
        if(flag1==1 && !rm55)
        {
            printf("This is bulukulu festival year.\n");
            flag3=1;
        }
        if(flag1==0 && flag2==0 && flag3==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
