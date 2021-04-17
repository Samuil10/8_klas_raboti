#include <iostream>
#include <windows.h>
using namespace std;
int main(){
SetConsoleOutputCP(1251);
int k;
cout<<"Тази програма извежда всички трицифрени числа, сумата от цифрите на които е равна на въведено от потребителя естествено число k."<<endl;
cout<<"Въведете естественото число k:";
cin>>k;
 if(k>27){
                cout<<"Няма трицифрени числа със сума от цифрите, равна на "<<k<<".";
                return 0;
            }
if(k==0){
    cout<<"Няма трицифрени числа със сума от цифрите, равна на 0.";
}
else {
    cout<<"Трицифрените числа със сума на цифрите равна на "<<k<<" са:"<<endl;
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
