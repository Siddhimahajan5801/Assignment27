#include <iostream>
#include <cstring>
using namespace std;

class CString
{
private:
    char *str;
    int size;

public:
    CString ()
    {
        str=(char*)malloc(1);
        size=1;
    }

    CString (char *a)
    {
        size= strlen(a);
        str=(char*)malloc(size+1);
        strcpy(str, a);
    }

    CString operator +( CString &b )
    {

        int size,size1,size2;
        size1= strlen(str);
        size2= strlen(b.str);
        size= size1+size2;

        CString temp;
        temp.str=(char*)malloc(size+1);
        for (int i=0; i<size1; i++){
            temp.str[i]= str[i];  }

        for (int j=0; j<size; j++){
            temp.str[size1+j]= b.str[j];
        }
       return temp;
    }

    void operator ==( CString &b)
    {
       if (strlen(str)==strlen(b.str)){
            for (int i=0; i<strlen(str); i++){
                if (str[i]!= b.str[i]){
                 cout<<"Strings are different! "<<endl;
                 break;
            }
                 else
                  cout<<"Strings are same!"<<endl;
                  break;
       }
    }
       else
        cout<<"Strings are different! "<<endl;
    }

    void Display ()
    {
        cout<<str<<endl;
    }
};

int main ()
{
    class CString s1("Hello"), s2("world"), s3, s4("Hello");

    s1.Display();
    s2.Display();

    s3=s1+s2;
    cout<<endl<<"After concatenation of the given two strings! "<<endl;
    s3.Display();

    cout<<endl<<"For s1 and s2 "<<endl;
    s1==s2;

    cout<<endl<<"For s1 and s4 "<<endl;
    s1==s4;

    return 0;
}
