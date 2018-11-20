#include <iostream>
using namespace std;
double a=0.000000;
double b=0.000000;
double c=0.000000;
double d=0.000000;

 int main()
   {   cout<<"print in";
       cin>>a;
       cout<<"print in";
       cin>>b;
       cout<<"print in";
       cin>>c;
       d=a>b?a:b;
       d=d>c?d:c;
       if(a+b+c-d>d)
        cout<<"yes";
       else
        cout<<"no";

   }
