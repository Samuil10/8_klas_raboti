#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(1251);
cout<<"Тази програма извежда a^n."<<endl;
double a;
int n;
int i=0, d=1;
cout<<"Въведете a:";
cin>>a;
cout<<"Въведете n:";
cin>>n;
if (n>0)
    {
        while (n>i)
            {
  d=d*a;
  i++;
            }
            cout<<a<<"^"<<n<<"="<<d;
    }
else
    {
cout<<"n трябва да е повече от нула";
    }
return 0;
}
