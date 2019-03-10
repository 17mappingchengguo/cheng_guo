#include<iostream>
#include <iomanip>
#include<cmath>
#include "../matrix.h"
using namespace std;

ostream &operator<<(ostream &output,const Matrix &number)
{
  output <<"{" <<number.firstRow<<"}"
     <<"\n"<<"{"<<number.secondRow<<"}"
     <<"\n"<<"{"<<number.thirdRow<<"}";
     <<¡°\n"<<"{"<<number.fourthRow<<"}";
  return output;
}

istream &operator>>(istream &input,Matrix &number)
{
  input.ignore();
  input>> setw(4)>>number.firstRow;
  input.ignore();
  input>>setw(4)>>number.secondRow;
  input.ignore();
  input>>setw(4)>>number.thirdRow;
  input.ignore();
  input>>setw(4)>>number.fourthRow;
  return input;
}
