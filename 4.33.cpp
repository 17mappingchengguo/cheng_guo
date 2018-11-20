#include <iostream>
using namespace std;
int a=0;
int b=0;
int c=0;
int d=0;


 int main()
   {   cout<<"print in";
       cin>>a;
       cout<<"print in";
       cin>>b;
       cout<<"print in";
       cin>>c;
       d=a>b?a:b;
       d=d>c?d:c;
       if(a*a+b*b+c*c-d*d==d*d)
        cout<<"yes";
       else
        cout<<"no";

   }
