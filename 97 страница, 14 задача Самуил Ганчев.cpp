#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
SetConsoleOutputCP(1251);
cout<<"Тази програма извежда всички трицифрени числа, сумата от цифрите на които е просто число. Те са:"<<endl<<endl;
 int a,b,c;
 for(int i=100;i<1000;i++)
 {
 a=i%10;
 b=i/10%10;
 c=i/100;
 switch(a+b+c)
 {
 case 2 :cout<<i<<", ";
 break;
 case 3 :cout<<i<<", ";
 break;
 case 5 :cout<<i<<", ";
 break;
 case 7 :cout<<i<<", ";
 break;
 case 11:cout<<i<<", ";
 break;
 case 13:cout<<i<<", ";
 break;
 case 17:cout<<i<<", ";
 break;
 case 19:cout<<i<<", ";
 break;
 case 23:cout<<i<<", ";
 break;
 }
 }
 cout<<endl;
 return 0;
}
