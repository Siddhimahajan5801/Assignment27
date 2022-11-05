#include <iostream>
#include<cstring>
using namespace std;

class mystring
{
    private:
        char str[100];

    public:
        mystring() {  }

        mystring (char a[])
         {
             strcpy(str, a);
         }

         void display_string()
         {
             cout<<str<<endl;
         }

         void operator ! ()
         {
             int size= strlen(str);
             char temp[size];
             temp;
               for (int i=0; i<size; i++){
                    if (str[i]>=65 && str[i]<=96)
                    {
                        temp[i]=str[i]+32;
                    }
                    else if (str[i]>=97 && str[i]<=122)
                    {
                        temp[i]=(str[i]-32);
                    }
                }
                for (int i=0; i<size; i++){
                    cout<<temp[i];
                }

         }
};

int main ()
{
    class mystring s1("HelloSidM"), s2;
    cout<<"The string is : "<<endl;
    s1.display_string();

    !s1;

    return 0;
}
