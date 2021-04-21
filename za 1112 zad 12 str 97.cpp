#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
 int sum;
  for (int i=1000; i<10000; i++)
  {
  a=i/100%10;
  b=i/10%10;
  c=i%10;
  d=i/1000;
  sum=a+b+c+d;
  if(sum/10>0 && sum%2==0)
  cout<<i<< " ";


  }

return 0;
}
