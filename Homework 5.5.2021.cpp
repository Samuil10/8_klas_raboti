#include <iostream>
using namespace std;
int main () {
int a;
cout<<"The program checks if a year is a leap year"<<endl;
cout<<"Enter a year :";
cin>>a;
if (a%4==0){
    if (a%100==0){
        if (a%400==0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}
