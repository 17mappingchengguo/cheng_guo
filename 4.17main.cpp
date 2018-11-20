#include <iostream>
using namespace std;
double a=0;
double b=1;
double c=1;
int main()
{

       while (a<10)
       {
        cin>>b;
        a=a+1;
        b=b;
        c=c>b?c:b;

          cout <<"counter:"<<a<<endl;
           cout <<"number:"<<b<<endl;
           cout <<"largest:"<<c<<endl;

       }
       while (a>=10)
       {

         return 0;
       }
   }
