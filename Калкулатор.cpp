#include <iostream>
using namespace std;
int main()
{
char c;
double a;
double b;
cin>>a;
cin>>c;
cin>>b;
switch(c)
{
case'*':
cout<<a*b;
break;
case'/':
cout<<a/b;
break;
case'+':
cout<<a+b;
break;
case'-':
cout<<a-b;
break;
default:
cout << "Error! operator is not correct";
break;
}
return 0;
}
