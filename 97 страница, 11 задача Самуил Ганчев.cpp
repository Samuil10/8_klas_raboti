#include <iostream>
#include <windows.h>
using namespace std;
int main () {
SetConsoleOutputCP(1251);
cout<<"Тази програма извежда всички трицифрени числа, които нямат в записа си цифра нула и са кратни на всяка своя цифра. Те са:"<<endl;
for(int a=1; a<=9; a++){
        for(int b=1; b<=9; b++){
                for(int c=1; c<=9; c++){
        if((a*100+b*10+c)%a==0 && (a*100+b*10+c)%b==0 && (a*100+b*10+c)%c==0){
            cout<<a*100+b*10+c<<", ";
        }
        }
        }
}
cout<<endl;
return 0;
}
