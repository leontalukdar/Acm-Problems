#include <stdio.h>
int main()
{
    int bd,cd,age,n,d,m,y,d1,m1,y1,i;
    scanf("%d",&n);
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d/%d/%d",&d,&m,&y);
            scanf("%d/%d/%d",&d1,&m1,&y1);
            cd=d+m*30+y*365;
            bd=d1+m1*30+y1*365;
            age=cd-bd;
            if(age<0)
                printf("Case #%d: Invalid birth date\n",i);
            if(age>=0 && age<47815)
            {
                age=age/365;
                printf("Case #%d: %d\n",i,age);
            }
            if(age>=47815)
                printf("Case #%d: Check birth date\n",i);
        }
    }
    return 0;
}
