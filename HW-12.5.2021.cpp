#include <iostream>
using namespace std;
int main () {
int br=0;
double a = 10600;
for (int i=1; i<=10; i++){
    a=a+(6*a/100);
    if (i==1){
    cout<<"After "<<i<<" year: "<<a<<endl;
    }
    else cout<<"After "<<i<<" years: "<<a<<endl;
}
cout<<endl;
cout<<"If you study after 10 years, for 4 years you will pay: ";
for (int i=1; i<=4; i++){
        a=a+(6*a/100);
           br=br+a;
}
cout<<br;
cout<<endl;
return 0;
}
