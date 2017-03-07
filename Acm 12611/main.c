#include <stdio.h>
int main()
{
    int n,r,ulx,uly,urx,ury,llx,lly,lrx,lry,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&r);
        ulx=-(r*5*45)/100;
        uly=(r*3)/2;
        urx=(r*5*55)/100;
        ury=uly;
        lrx=urx;
        lry=-ury;
        llx=ulx;
        lly=lry;
        printf("Case %d:\n",i);
        printf("%d %d\n%d %d\n%d %d\n%d %d\n",ulx,uly,urx,ury,lrx,lry,llx,lly);
    }
    return 0;
}
