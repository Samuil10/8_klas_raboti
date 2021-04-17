#include <iostream>
#include <windows.h>
using namespace std;
int main () {
SetConsoleOutputCP(1251);
double a;
double i=1;
int q=0;
cout<<"Въведете число:";
cin>>a;
while (i<=a){
    i=i*10;
        q++;
}
cout<<"Числото е "<<q<<"-цифрено"<<endl;;

return 0;
}
