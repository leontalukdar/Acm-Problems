#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,q,i,j,count1,count2,count,flag;
    char ch[105][4];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>ch[i];
    cin>>q;
    while(q--)
    {
        count1=count2=count=0;
        cin>>j;
        if(strcmp(ch[j],"?"))
            cout<<ch[j]<<endl;
        else
        {
            i=j;
            {
                while(!strcmp(ch[i],"?") && i!=n)
                {
                    i++;
                    count1++;
                }
                while(!strcmp(ch[j],"?") && j!=1)
                {
                    j--;
                    count2++;
                }
                if(i==n && !strcmp(ch[i],"?"))
                {
                    while(count2--)
                    {
                        cout<<"right of ";
                    }
                    cout<<ch[j]<<endl;
                }
                else if(j==1 && !strcmp(ch[j],"?"))
                {
                    while(count1--)
                    {
                        cout<<"left of ";
                    }
                    cout<<ch[i]<<endl;
                }
                else if(count1==count2)
                    cout<<"middle of "<<ch[j]<<" and "<<ch[i]<<endl;
                else
                {
                    if(count1>count2)
                    {
                        while(count2--)
                        {
                            cout<<"right of ";
                            flag=1;
                        }
                    }
                    else
                    {
                        while(count1--)
                        {
                            cout<<"left of ";
                            flag=0;
                        }
                    }
                    if(flag==0)
                        cout<<ch[i]<<endl;
                    else if(flag==1)
                        cout<<ch[j]<<endl;
                }
            }
        }
    }
    return 0;
}
