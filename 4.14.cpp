#include <iostream>
using namespace std;

int main()
{
    int account;
    double balance;
    double charges;
    double credits;
    double creditlimit;
    double newbalance;

    cout<<"Enter account number (-1 to quit ):";
    cin>>account;
    while (account==-1)
    {
       return 0;
    }

    while (account!=-1)
    {
    cout<<"Enter beginning balance:";
    cin>>balance;
    cout<<"Enter total charges:";
    cin>>charges;
    cout<<"Enter total credits:";
    cin>>credits;
    cout<<"Enter credit limit:";
    cin>> creditlimit;

    newbalance=balance+charges-credits;
    if(newbalance>creditlimit)
         {
            cout<<"Account:"<<account<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:"<<newbalance<<endl;
            cout<<"Credit Limit Exceeded."<<endl;

        }

     else
        {
            cout<<"Account:"<<account<<endl;
            cout<<"Credit limit:"<<creditlimit<<endl;
            cout<<"Balance:"<<newbalance<<endl;

        }
}
}
