#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main ()
{
    char a[101];
    ifstream in("palindrom.in");
    ofstream out("palindrom.out");
    int n,i,l,j,v,x;
    in>>n;
    for(i=1;i<=n;i++)
    {
        in>>a;
        l=strlen(a);
        x=1;j=0; v=l-1;
        while(j<v)
            {
                if(a[j]!=a[v])
                    x=0;
                j++;
                v--;
            }
        out<<x<<endl;
    }
    in.close();
    out.close();
    return 0;
}
