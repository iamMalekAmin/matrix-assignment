#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <fstream>
using namespace std;

class matrix
{
    public:
        int rows;
        int cols;
        int** items;



          matrix(int ,int );
        ~matrix();

         friend istream& operator>>(istream &in , const matrix& m)
         {
             for(int i=0;i<m.rows;i++)
             {
                 for(int j=0;j<m.cols;j++)
                 {
                     in>>m.items[i][j];
                 }
             }
             return in;
         }
         friend ostream& operator<<(ostream &out , const matrix& m)
         {
             for(int i=0;i<m.rows;i++)
             {
                 for(int j=0;j<m.cols;j++)
                 {
                     out<<m.items[i][j]<<" " ;
                 }
                 out<<endl;
             }
             return out;
         }
         matrix operator+(const matrix&);
         matrix operator-(const matrix&);
         matrix operator*(const matrix&);


    //private:


};

#endif // MATRIX_H
