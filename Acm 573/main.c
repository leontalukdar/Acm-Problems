#include <stdio.h>
int main()
{
    int H,U,D,F,flag;
    while(1)
    {
        scanf("%d %d %d %d",&H,&U,&D,&F);
        int ih=0, day=0;
        float E=0;
        if(H==0)
            break;
        H=H*100;
        U=U*100;
        D=D*100;
        E=(float)((U*F)/100);
        while(ih<H || ih>0)
        {
            day++;
            ih=ih+U;
            if(ih>H)
            {
                flag=1;
                break;
            }
            ih=ih-D;
            U=U-E;
            if(ih<0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("success on day %d\n",day);
        if(flag==0)
            printf("failure on day %d\n",day);
    }
    return 0;
}
