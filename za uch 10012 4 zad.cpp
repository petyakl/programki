#include <iostream>
using namespace std;
int main()
{
  int a, b, c, d;
  for (int i=1000; i<10000; i++)
  {
  a=i/100%10;
  b=i/10%10;
  c=i%10;
  d=i/1000;
  if(a==b || b==c || b==d ||a==c || a==d || c==d)
  cout<<i<< " ";


  }

return 0;
}
