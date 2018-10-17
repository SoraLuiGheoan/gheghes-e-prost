#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[256];
    int i,y;
    cin.get(a,256);
    y=strlen(a);
    if(a[0]!=' ')
        a[0]=a[0]-32;
    if(a[y-1]!=' ')
        a[y-1]=a[y-1]-32;
    for(i=1;i<y-1;i++)
        if(a[i+1]==' ' && a[i]!=' ' || a[i-1]==' ' && a[i]!=' ')
                a[i]=a[i]-32;
    cout<<a;
    return 0;
}
