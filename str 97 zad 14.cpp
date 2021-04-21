#include <iostream>
using namespace std;
int main()
{
int a, b ,c;
for (int i=100; i<1000; i++)
{a=i/100;
b=i/10%10;
c=i%10;
for(int k=2; k<21; k++)
{if ((a+b+c)/k==0)
break;
else cout<<i<<" ";}
}
return 0;
}
