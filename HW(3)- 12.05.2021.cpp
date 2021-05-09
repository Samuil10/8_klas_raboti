#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Enter the number of lines: ";
cin>>a;
cout<<endl;
for (int i=a; i>=1; i--){
    for (int q=1; q<=a-i; q++){
        cout<<"  ";
    }
    for (int q=1; q<=i; q++){
        cout<<"* ";
    }
        cout<<endl;
}
return 0;
}
