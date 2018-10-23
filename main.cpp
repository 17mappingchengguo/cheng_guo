#include <iostream>
using namespace std;

 int main()
{
int a=0;
int b=1;
int num=0;
int temp=0;


std::cin>>a;
while (a>0)
{
    temp =a%10;
    num=num+b*temp;
    a=a/10;
    b=b*2;
}

cout <<num<<endl;
return 0;
}

