#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(1251);
int k;
cout<<"���� �������� ������� ������ ���������� �����, ������ �� ������� �� ����� � ����� �� �������� �� ����������� ���������� ����� k."<<endl;
cout<<"�������� ������������ ����� k:";
cin>>k;
 if(k>27){
                cout<<"���� ���������� ����� ��� ���� �� �������, ����� �� "<<k<<".";
                return 0;
            }
if(k==0){
    cout<<"���� ���������� ����� ��� ���� �� �������, ����� �� 0.";
}
else {
    cout<<"������������ ����� ��� ���� �� ������� ����� �� "<<k<<" ��:"<<endl;
for (int i=100; i<=999; i++){
    int stotici=i/100;
    int desetici=(i%100)/10;
    int edinici=i-stotici*100-desetici*10;

    if(stotici+desetici+edinici==k){
                cout<<i<<", ";
            }

}
}
return 0;
}
