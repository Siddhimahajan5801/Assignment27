#include <iostream>
using namespace std;

class Operators{
    private:
        int num;

    public:
        void set_num(int x){ num=x; }

        int get_num() { return num; }

        Operators operator ++()  //pre-increment
        {
            Operators temp;
            ++num;
            temp.num=num;
            return temp;
        }

        Operators operator --()   //pre-decrement
        {
            Operators temp;
            --num;
            temp.num=num;
            return temp;
        }
};

int main (){
   class Operators a1, a2;

   a1.set_num(5);
   cout<<"The number before increment : "<<a1.get_num()<<endl;
   a1=(++a1);
   cout<<"The number after increment  : "<<a1.get_num()<<endl<<endl;

   a2.set_num(32);
   cout<<"The number before decrement : "<<a2.get_num()<<endl;
   a2=(--a2);
   cout<<"The number after decrement  : "<<a2.get_num()<<endl<<endl;


  return 0;
}
