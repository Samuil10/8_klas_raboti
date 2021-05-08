#include <iostream>
using namespace std;
int main () {
int a;
cout<<"Enter the number of lines: ";
cin>>a;
for (int i=1; i<=a; i++){
    for (int q=a-i+1; q>=1; q--){
        cout<<q<<" ";
    }
    for (int q=1; q<=a-i+1; q++){
        if (q!=1){
        cout<<q<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
