#include <iostream>
#include <cmath>
using namespace std;
int Stepen(int p, int k)
{
    int st=1;
    for(int i=0; i<k; i++) st=p*st;
    return st;
}


int main()
{
 int p, q, k, r
 cin>>p>>q>>k>>r;
cout<<(Stepen(p,k)-Stepen(q,r))/2.0;

    return 0;
}
