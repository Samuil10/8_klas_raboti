#include <iostream>
using namespace std;
int main(){
  int arr[10],n,x,a=0;
  cin>>n;
  for(int i=0;i<n;i++)cin>>arr[i];
  cin>>x;
  for(int j=0;j<n;j++)
    if(arr[j]==x){
      a=1;
      break;
    }
  if(a==1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
