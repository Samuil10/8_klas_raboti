#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(1251);
int m;
int n;
cout<<"Тази програма извежда всички числа в интервала [m,n], които са кратни на 5."<<endl;
cout<<"Въведете цялото число m:";
cin>>m;
cout<<"Въведете цялото число n:";
cin>>n;
if (n>m){
    cout<<"Числата в интервала ["<<m<<","<<n<<"],кратни на 5 са:"<<endl;
    for (;m<=n; m++){
        if (m%5==0){
            cout<<m<<", ";
        }
    }
    cout<<endl;
}
else {
    cout<<"Внимание:'n' трябва да е повече от 'm'."<<endl;
}
return 0;
}

