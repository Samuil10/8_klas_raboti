#include<iostream>
#include <cmath>
using namespace std;
int main ()
{
int n;
cin>>n;
cout<<"1,";
if (0>n) {
    cout<<"It must be >0";
}
for (int i=2; i<=n/2; i++)
{    if(n%i==0){
        cout<<i<<",";
        }
}
cout<<n;
return 0;
}
