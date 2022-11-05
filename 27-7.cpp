#include <iostream>
using namespace std;

class fraction
{
    private:
    long numerator;
    long denominator;

    public:
        fraction ( long n=0, long d=0 ){ numerator=n;   denominator=d; }

        friend ostream& operator << (ostream &out , fraction f);

        friend istream& operator >> (istream &in , fraction &f);

        fraction operator ++()  //pre-increment
        {
            fraction temp;
            temp.numerator= ++numerator;
            temp.denominator= ++denominator;
            return temp;
        }

        fraction operator --()   //pre-decrement
        {
           fraction temp;
            temp.numerator= --numerator;
            temp.denominator= --denominator;
            return temp;
        }

        fraction operator ++(int useless)  //post-increment
        {
            fraction temp;
            temp.numerator=numerator++;
            temp.denominator=denominator++;
            return temp;
        }

        fraction operator --(int useless)   //post-decrement
        {
            fraction temp;
            temp.numerator=numerator--;
            temp.denominator=denominator--;
            return temp;
        }

};
ostream& operator << ( ostream &out, fraction f)
{
    cout<<f.numerator<<"/"<<f.denominator;
    return out;
}

istream& operator >> ( istream &in , fraction &f)
{
    cout<<"Numerator   :   ";
    cin>>f.numerator;
    cout<<endl;
    cout<<"Denominator :   ";
    cin>>f.denominator;

    return in;
}

int main(){
    class fraction f1, f2;
    cout<<"f1   :   "<<f1<<endl;
    cout<<"f2   :   "<<f2<<endl<<endl;

    cout<<"Enter 1st Fraction value "<<endl<<endl;
    cin>>f1;

    f1++;
    cout<<endl<<"f1++  :  "<<f1<<endl;
    ++f1;
    cout<<"++f1  :  "<<f1<<endl<<endl;

    cout<<"Enter 2nd Fraction value "<<endl<<endl;
    cin>>f2;

    cout<<endl<<"f2 = ++f1"<<endl;
    f2= ++f1;
    cout<<"f1  :  "<<f1<<endl;
    cout<<"f2  :  "<<f2<<endl;

    cout<<endl<<endl<<"f2 = f1++"<<endl;
    f2=f1++;
    cout<<"f1  :  "<<f1<<endl;
    cout<<"f2  :  "<<f2<<endl;


return 0;
}
