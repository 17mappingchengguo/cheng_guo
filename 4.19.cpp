#include <iostream>
using namespace std;
double a=0;
double b=1;
double c=1;
double d=0;

int main()
{

       while (a<10)
       {cout <<"print numbers"<<endl;
        cin>>b;
        a=a+1;
        d=b>c?c:d;
        c=b>c?b:c;
        }




          cout <<"counter:"<<a<<endl;
           cout <<"number:"<<b<<endl;
           cout <<"largest:"<<c<<endl;
           cout <<"second largest:"<<d<<endl;


       while (a>=10)
       {

         return 0;
       }
   }
