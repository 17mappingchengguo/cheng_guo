#include <iostream>
using namespace std;
int main()
{
   int a=1;
   int b=0;
   int c=1;
   int x=0;
   double e = 1.000000;
   double f = 1.000000;
cout <<"Print in X:";
cin >> x;
cout <<"Print in Y:";
cin >>b;
while(a<b)
   {
      f*= x;
      c*=a;
      e+=f/c;
      a++;
   }
cout<<"e to the("<<x<<")is:"<<e<<endl;
}
