#include <iostream>
#include <fstream>
#include "matrix.h"
using namespace std;


int main()
{
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Welcome to "<<name<<" Matrix Calculator "<<endl;
    cout<<"Choose an operation from below "<<endl;
    cout<<" 1- Perform Matrix Addition \n 2- Perform Matrix Subtraction \n 3- Perform Matrix Multiplication \n 4- Matrix Transpose "<<endl;
    int choice,row,col;
    cin>>choice;
    cout<<"Enter the first matrix size rows x columns "<<endl;
    cin>>row>>col;
    matrix a(row,col);
    cout<<"Enter the first matrix elements "<<endl;
    cin>>a;
    cout<<"Enter the second matrix size rows x columns "<<endl;
    cin>>row>>col;
    matrix b(row,col);
    cout<<"Enter the second matrix elements "<<endl;
    cin>>b;
    if(choice==1)
    {
        cout<<"Performing a matrix addition"<<endl;

    }
       else if(choice==2)
    {
        cout<<"Performing a matrix subtraction "<<endl;

    }
       else if(choice==3)
    {
        cout<<"Performing a matrix multiplication "<<endl;

    }
       else if(choice==4)
    {
        cout<<"Performing a matrix transpose"<<endl;

    }

}
