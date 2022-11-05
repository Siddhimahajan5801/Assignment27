#include <iostream>
using namespace std;
class Time{
int h,m,s;

public:
friend istream& operator >> (istream &in , Time &t);

friend ostream& operator << (ostream &out , Time t);

void operator==(Time t){
     if (h==t.h && m==t.m && s==t.s)
     cout<<endl<<"Times are Same "<<endl;
     else
        cout<<endl<<"Times are Different "<<endl;
    }
};


istream& operator>>(istream &in , Time &t)
 {
    cout<<"Enter Hours   :  ";
    cin>>t.h;
    cout<<endl<<"Enter Minutes :  ";
    cin>>t.m;
    cout<<endl<<"Enter Seconds :  ";
    cin>>t.s;

    return in;
 }

ostream& operator<<(ostream &out , Time t )
{
    out<<"Hours   : "<<t.h<<endl;
    out<<"Minutes : "<<t.m<<endl;
    out<<"Seconds : "<<t.s<<endl;
    return out;
}

int main (){
  class Time t1, t2;

  cout<<"Enter First Time "<<endl;
  cout<<"----------------------"<<endl;
  cin>>t1;
  cout<<endl<<"First Time "<<endl;
  cout<<t1;

  cout<<endl<<"Enter Second Time "<<endl;
  cout<<"----------------------"<<endl;
  cin>>t2;
  cout<<endl<<"Second Time "<<endl;
  cout<<t2;

  //Checking if t1 and t2 are same:
  t1==t2;

return 0;
}
