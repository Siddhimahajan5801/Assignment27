#include<iostream>
using namespace std;

class Numbers {
private:
    int x,y,z;

public:
    void set_numbers(int a, int b, int c){ x=a; y=b; z=c; }

    void show_numbers()
    {
         cout<<"The numbers are : "<<endl;
         cout<<"----------------"<<endl;
         cout<<"x = "<<x<<endl;
         cout<<"y = "<<y<<endl;
         cout<<"z = "<<z<<endl;
    }
    Numbers operator-()
    {
        Numbers temp;
        temp.x=(-x);
        temp.y=(-y);
        temp.z=(-z);
        return temp;
    }

};

int main (){
   class Numbers n1, n2;

   n1.set_numbers(10,15,8);
   n1.show_numbers();

   cout<<endl<<"After negation "<<endl;
   n2=(-n1);
   n2.show_numbers();

return 0;}
