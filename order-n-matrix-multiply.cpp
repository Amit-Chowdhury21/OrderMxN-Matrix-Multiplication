#include <iostream>
using namespace std;
int main()
{
  int i1,i2,i3,j1,j2,j3;
  cout<<"Enter the rows and columns of the First matrix: ";
  cin>>i1>>j1;
  
  cout<<"Enter the rows and columns of the Second matrix: ";
  cin>>i2>>j2;
  
  if(j1==i2)
  {
  
    i3=i1;
    j3=j2;
  
    int X1[i1][j1], X2[i2][j2], X3[i3][j3]={0};
  
    cout<<"Enter the elements of the First Matrix: ";
    for(int m=1;m<=i1;m++)          
    {
        for(int n=1;n<=j1;n++)       
        {
            cout<<endl<<"Enter the value of element ("<<m<<","<<n<<") :";
            cin>>X1[m][n];
        }
    }
    
    cout<<"Enter the elements of the Second Matrix: ";
    for(int m=1;m<=i2;m++)          
    {
        for(int n=1;n<=j2;n++)       
        {
            cout<<endl<<"Enter the value of element ("<<m<<","<<n<<") :";
            cin>>X2[m][n];
        }
    }
  
  //for A(3,2) * B(2,2) 
  // M11 = A11*B11 + A12*B21
  // M12 = A11*B12 + A12*B22
  // M21 = A21*B11 + A22*B21
  // M22 = A21*B12 + A22*B22
  // M31 = A31*B11 + A32*B21
  // M32 = A31*B12 + A32*B22
  
  //for A(2,3) * B(3,2) 
  // M11 = A11*B11 + A12*B21 + A13*B31
  // M12 = A11*B12 + A12*B22 + A13*B32
  // M21 = A21*B11 + A22*B21 + A23*B31
  // M22 = A21*B12 + A22*B22 + A23*B32
  
  //for A(3,3) * B(3,3) 
  // M11 = A11*B11 + A12*B21 + A13*B31
  // M12 = A11*B12 + A12*B22 + A13*B32
  // M13 = A11*B13 + A12*B23 + A13*B33
  // M21 = A21*B11 + A22*B21 + A23*B31
  // M22 = A21*B12 + A22*B22 + A23*B32
  // M23 = A21*B13 + A22*B23 + A23*B33
  // M31 = A31*B11 + A32*B21 + A33*B31
  // M32 = A31*B12 + A32*B22 + A33*B32
  // M33 = A31*B13 + A32*B23 + A33*B33

//  for(int m=1;m<=i3;m++)          
//  {
//      for(int n=1;n<=j3;n++)       
//      {
//         X3[m][n]=X1[m][1]*X2[1][n] + X1[m][2]*X2[2][n] +...... 
           // so third for loop is required for addition
//      }
//  }

    for(int m=1;m<=i3;m++)                // Calculating Matrix Multiplication
    {
        for(int n=1;n<=j3;n++)       
        {
            X3[m][n]=0;
            for(int p=1;p<=i2;p++)
            {
                X3[m][n]+=X1[m][p]*X2[p][n];  
            }
        }
    }

    cout<<endl<<"The Multiplication of given two Matrices is: "<<endl;  
  
    for(int m=1;m<=i3;m++)          // Displaying the Calculated Matrix
    {
        for(int n=1;n<=j3;n++)       
        {
            cout<<X3[m][n]<<" ";
        }
        cout<<endl;
    }  
  }
  else
  cout<<"The number of columns of the First matrix is not same as number of Rows of the Second matrix. Hence Matrix Multiplication is not possible."<<endl;
  
  return 0;

 
}