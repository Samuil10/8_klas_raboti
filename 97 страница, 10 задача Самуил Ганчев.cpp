#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(1251);
int m;
int n;
cout<<"���� �������� ������� ������ ����� � ��������� [m,n], ����� �� ������ �� 5."<<endl;
cout<<"�������� ������ ����� m:";
cin>>m;
cout<<"�������� ������ ����� n:";
cin>>n;
if (n>m){
    cout<<"������� � ��������� ["<<m<<","<<n<<"],������ �� 5 ��:"<<endl;
    for (;m<=n; m++){
        if (m%5==0){
            cout<<m<<", ";
        }
    }
    cout<<endl;
}
else {
    cout<<"��������:'n' ������ �� � ������ �� 'm'."<<endl;
}
return 0;
}

