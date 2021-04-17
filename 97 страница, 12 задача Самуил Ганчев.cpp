#include <iostream>
#include <windows.h>
using namespace std;
int main (){
SetConsoleOutputCP(1251);
cout<<"Тази програма извежда всички четирицифрени числа, сумата от цифрите, на които е двуцифрено четно число.Те са:"<<endl<<endl;
for(int a=1; a<=9; a++){
        for(int b=0; b<=9; b++){
                for(int c=0; c<=9; c++){
                        for(int d=0; d<=9; d++){
                                if ((a+b+c+d)>=10 && (a+b+c+d)<=99){ //Сумата на цифрите на всички четирицифрени числа е по-малка от 99, но аз да си го напиша :)
                                        if((a+b+c+d)%2==0){
                                            cout<<a*1000+b*100+c*10+d<<", ";
        }
        }
        }
        }
        }
}
return 0;
}
