#include <iostream>
#include <smath>
using namespace std;
bool Islo (int a)

{
    return a%2==0;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int p;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if (Islo(a[i])==1 && Islo(i)==1) p*=a[i];
    }
    cout<<p;
    return 0;
}
