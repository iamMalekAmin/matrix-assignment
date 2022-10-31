#include "matrix.h"
#include <iostream>
#include <fstream>

using namespace std;

matrix::matrix(int rows,int cols)
{
    this->rows = rows;
    this->cols = cols;
    items = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
          items = new int*[cols];

    }
}
matrix::~matrix()
{
    for(int i=0;i<=rows;i++)
    {
        for(int j=0;j<=cols;j++)
        {
            items[i][j]=0;
        }
    }

}
matrix matrix::operator+(const matrix& m)
{
     if(cols !=m.cols && rows!=m.rows)
    {
        cout<<"The two matrix must be the same size"<<endl;
    }
        matrix newMatrix(rows,cols);
          for(int i=0;i<=rows;i++)
             {
                   for(int j=0;j<=cols;j++)
                   {
                       newMatrix.items[i][j] = items[i][j] + m.items[i][j];
                   }
             }
             return newMatrix;
}

matrix matrix:: operator- (const matrix& m)
{
    if(cols !=m.cols && rows!=m.rows)
    {
        cout<<"The two matrix must be the same size"<<endl;
    }
        matrix newMatrix(rows,cols);
          for(int i=0;i<=rows;i++)
             {
                   for(int j=0;j<=cols;j++)
                   {
                       newMatrix.items[i][j] = items[i][j] - m.items[i][j];
                   }

             }
             return newMatrix;

}

matrix matrix:: operator* (const matrix& m)
{
    if(cols !=m.cols && rows!=m.rows)
    {
        cout<<"The two matrix must be the same size"<<endl;
    }
        matrix newMatrix(rows,cols);
          for(int i=0;i<=rows;i++)
             {
                   for(int j=0;j<=cols;j++)
                   {
                       for(int k=0;k<cols;++k)
                       newMatrix.items[i][j] += items[i][k] * m.items[k][j];
                   }
             }
             return newMatrix;
}






