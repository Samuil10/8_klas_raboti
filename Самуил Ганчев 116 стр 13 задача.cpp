#include <iostream>
using namespace std;
int main () {
int n,x,b=0;
cin>>n;
int m[n-1];
for (int i=0; i<n; i++) {
    cin>>m[i];
}
cin>>x;
for (int i=0; i<n; i++) {
    if (m[i]==x){
     b=i+1;
     cout<<b<<endl;
     break;
    }
}
if (b==0){
    cout<<"No"<<endl;
}
return 0;
}
