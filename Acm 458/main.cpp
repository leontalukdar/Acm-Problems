#include <iostream>
using namespace std;
int main()
{
    int i;
    char ch[200],c;
    while (cin >> ch){
        for (i = 0; ch[i] != '\0'; i++)
        {
            c = ch[i] - 7;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
