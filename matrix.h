#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include<iostream>
#include<string>

class Matrix
{
    public:
        friend::std::ostream&operator<<(std::ostream&,const Matrix&);
        friend::std::istream&operator>>(std::istream&,Matrix);

    private:
        std::string firstRow;
        std::string secondRow;
        std::string thirdRow;
        std::string fourthRow;
};

#endif // MATRIX_H_INCLUDED
