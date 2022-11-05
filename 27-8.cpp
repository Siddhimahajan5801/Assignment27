#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];

public:
    void input_matrix()
    {
       cout<<"Enter Matrix Element (3 x 3) : "<<endl<<endl;
       for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>a[i][j];
          }
       }
    }

    void show_matrix()
    {
        cout<<endl<<"Matrix is : "<<endl<<endl;
        for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<a[i][j]<<"   ";
             if (j==2)
            cout<<endl;
          }
       }
        cout<<endl;
    }

    Matrix operator-()
    {
        int i,j;
        Matrix temp;
        for( i=0; i<3; i++){
            for (j=0; j<3; j++){
               temp.a[i][j] = -a[i][j];
          }
       }
       return temp;
    }

};

int main ()
{
    class Matrix m1,m2;

    m1.input_matrix();
    m1.show_matrix();

    m2=(-m1);
    m2.show_matrix();

return 0;
}
