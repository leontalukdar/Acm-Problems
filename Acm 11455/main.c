#include <stdio.h>
int main()
{
    int i,j,a,b,c,d;
    scanf("%d",&i);
    for(j=1;j<=i;j++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
            printf("square\n");
        else if((a==c && b==d)||(b==c && a==d)||(a==b && c==d))
            printf("rectangle\n");
        else if(a+b+c>=d && a+b+d>=c && a+d+c>=b && b+c+d>=a)
            printf("quadrangle\n");
        else
            printf("banana\n");
    }
    return 0;
}
