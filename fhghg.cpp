#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[11];
    int i,j,x;
    cin>>a;
    x=strlen(a);
    for(i=x;i>0;i--)
        {for(j=0;j<i;j++)
            cout<<a[j];
        cout<<endl;
        }
    for(i=0;i<x;i++)
        {
        for(j=i;j<x;j++)
            cout<<a[j];
        cout<<endl;
        }
    return 0;
}
