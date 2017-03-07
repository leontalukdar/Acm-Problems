#include<stdio.h>
int main()
{
    long int num,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&num)==1)
    {
        if(num==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            sum=0;
            for(i=1;i<num;i++)
            {
                if(num%i==0) sum+=i;
            }
            if(sum==num) printf("%5ld  PERFECT\n",num);
            else if(sum<num) printf("%5ld  DEFICIENT\n",num);
            if(sum>num) printf("%5ld  ABUNDANT\n",num);
        }
    }
    return 0;
}
