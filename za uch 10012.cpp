#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cout<<"n= "; cin>>n;
   cout<<"m= "; cin>>m;
   while (m>=n)
   {cout<<"n= ";
    cin>>n;}
  for (int i=m; i<=n; i++)
  {
      if (i%5==0)
        cout<<i<<"  ";
  };
    return 0;
}
