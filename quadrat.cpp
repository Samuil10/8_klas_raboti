#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ("chcp 1251 > null");

    double a, b, c;
    cout<<"���� �������� ������ ��������� �� ����:"<<endl;
    cout<<"ax^2+bx+c=0"<<endl;
    cout<<"���� �������� ������������� a, b � c."<<endl;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"����� x � �������."<<endl;
            }
            else{
                cout<<"���� �������."<<endl;
            }
        }
        else{
            cout<<"x="<<-c/b<<endl;
        }
    }
    else{
        double d=b*b-4*a*c;
        if(d<0){
            cout<<"����������� ���� ������ ������."<<endl;
        }
        else{
            if(d==0){
                cout<<"x="<<-b/(2*a)<<endl;
            }
            else{
                cout<<"x1="<<(-b+sqrt(d))/(2*a)<<endl;
                cout<<"x2="<<(-b-sqrt(d))/(2*a)<<endl;
            }
        }
    }

    return 0;
}
