#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
int main(){
SetConsoleCP (1251);
SetConsoleOutputCP(1251);
system("chcp 1251 > nul");
double Ax, Ay, Bx, By;
cout<<endl;
char map[16][62]{
{"                 ********                                    "},
{"   ************      **        **************************    "},
{"     ********  ****          **  ********************        "},
{"     ************          ****************************      "},
{"     **********            **    ********************        "},
{"     ****                ********  ********************      "},
{"       **               ***************  ****  ****          "},
{"       ****             ***********  **        ****          "},
{"           ******        ************                        "},
{"           ********           *******              **        "},
{"           **********          ****                          "},
{"             ******            ****                  ****    "},
{"               ****            ****                ******    "},
{"               **               **                     **    "},
{"               **                                            "}
};
for (int i=0; i<=14; i++){
    for (int q=0; q<=59; q++){
        cout<<map[i][q];
    }
    cout<<endl;
}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Въведете кординати на точка А (южните географски ширини въвеждайте с минус, а северните с плюс. По същия начин западните дължини с минус, а источните с плюс):";
cin>>Ay;
cin>>Ax;
cout<<"Въведете кординати на точка Б (южните географски ширини въвеждайте с минус, а северните с плюс. По същия начин западните дължини с минус, а источните с плюс):";
cin>>By;
cin>>Bx;
double abc = fabs (Ay);
double bbc = fabs (By);
double YY = ((Ay-By)*110.9*(Ay-By)*110.9)/1000;
double z= (Ax*(111.3194444444444-(abc*1.236882716049383))-Bx*(111.3194444444444-(bbc*1.236882716049383)))/1000;
double XX = z*z;
double a=sqrt((XX*1000000)+(YY*1000));
int Q=Ay;
int W=By;
int Gosho=Ax;
int Ivan=Bx;
cout<<endl<<endl;
system("CLS");
cout<<endl;
for (int i=0; i<=14; i++){
    for (int q=0; q<=59; q++){
    if ((80-(i*10)== Q - (Q%10) && ((Gosho/10)*10/6)+30==q) || (80-(i*10)== W - (W%10) && ((Ivan/10)*10/6)+30==q)){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"*";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }
    else cout<<map[i][q];
    }
    cout<<endl;
}
cout<<endl;
cout<<"Растоянието е: "<<a<<" км";
cout<<endl;
return 0;
}

