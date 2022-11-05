#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
void setData(int x,int y ){ a=x; b=y; }

void showData(){ cout<<"The complex number is: "<<a<<"+"<<b<<"i\n"; }

friend Complex operator+(Complex ,Complex);
};

Complex operator+(Complex c1, Complex c2){
     Complex temp;
     temp.a= c1.a+c2.a;
     temp.b= c1.b+c2.b;
     return temp;
  }

int main(){
    class Complex C1,C2,C3;

    C1.setData(5,6);
    C1.showData();

    C2.setData(6,3);
    C2.showData();

    cout<<endl<<"The addition of C1 and C2 is "<<endl;
    C3=C1+C2;
    C3.showData();

return 0;
}
