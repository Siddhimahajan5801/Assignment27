#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
void setData(int x,int y ){ a=x; b=y; }

void showData(){ cout<<"The complex number is: "<<a<<"+"<<b<<"i\n"; }

Complex operator+(Complex C){
     Complex temp;
     temp.a= a+C.a;
     temp.b= b+C.b;
     return temp;
  }

Complex operator-(Complex C){
     Complex temp;
     temp.a= a-C.a;
     temp.b= b-C.b;
     return temp;
  }

Complex operator*(Complex C){
     Complex temp;
     temp.a= a*C.a;
     temp.b= b*C.b;
     return temp;
  }

int operator==(Complex C){
     if (a==C.a && b==C.b)
     return 1;
     else return 0;
  }
};

int main(){
   class Complex C1,C2,C3,C4,C5,C6;

    C1.setData(9,6);
    C1.showData();

    C2.setData(6,3);
    C2.showData();

    C6.setData(6,3);
    C6.showData();

    cout<<endl<<"The addition of C1 and C2 is "<<endl;
    C3=C1+C2;
    C3.showData();

    cout<<endl<<"The subtraction of C1 and C2 is "<<endl;
    C4=C1-C2;
    C4.showData();

    cout<<endl<<"The multiplication of C1 and C2 is "<<endl;
    C5=C1*C2;
    C5.showData();

    cout<<endl<<"Checking if C1==C2 , Return 1 if true else 0 for false "<<endl;
    int result=(C1==C2);
    cout<<"The result is : "<<result<<endl;

    cout<<endl<<"Checking if C6==C2 , Return 1 if true else 0 for false "<<endl;
    result=(C6==C2);
    cout<<"The result is : "<<result<<endl;


return 0;
}
