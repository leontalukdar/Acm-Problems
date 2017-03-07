#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#define theta acos(-1.00)/180.00

int main()
{
    double l,w,h,kon;
    while(cin>>l>>w>>h>>kon)
    {
        double nl,nh,nkon,temph,result;
        temph = l*tan(kon*theta);
        if(temph<=h)
        {
            nh = temph;
            result = (l*w*h)-(0.50*l*w*nh);
        }
        else
        {
            nkon = 90.00-kon;
            nl = h*tan(nkon*theta);
            result = 0.50*nl*h*w;
        }
        cout<<fixed<<setprecision(3)<<result<<" mL"<<endl;
    }
    return 0;
}
