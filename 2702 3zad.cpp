#include <iostream>
#include <cmath>
using namespace std;
bool Istri(int a, int b, int c)
{
    if (a+b>c && c+b>a && c+a>b) return 1;
    return 0;
}
int p(int a, int b, int c)
{
    return a+b+c;
}
double s(int a, int b, int c)
{
    int g=p(a,b,c)/2.0;
    return sqrt(g*(g-a)*(g-b)*(g-c));
}

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(Istri(a,b,c)==1) cout<<p(a,b,c)<<" "<<s(a,b,c);
   return 0;
}
