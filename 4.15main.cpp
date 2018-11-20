#include <iostream>
using namespace std;
double a=1;
double b=0;
double c=0;



int main()
{
   while(a>0)
   {
       cout<<"Enter hours worked(-1 to end):"<<endl;
       cin>>a;
       cout <<"Enter hourly rate of the employee($00.00):"<<endl;
       cin >>b;
       while (a<=40)
       {

       c=a*b;
           cout<<"Salary is $"<<c<<endl;cout<<"Enter hours worked(-1 to end):"<<endl;
       cin>>a;
       cout <<"Enter hourly rate of the employee($00.00):"<<endl;
       cin >>b;
       }
       while (a>40)
       {

           c=400+(a-40)*1.5*b;
       cout<<"Salary is $"<<c<<endl;
       cout<<"Enter hours worked(-1 to end):"<<endl;
       cin>>a;
       cout <<"Enter hourly rate of the employee($00.00):"<<endl;
       cin >>b;
       }
   }
   while (a=-1)
   {
       return 0;
   }

}
