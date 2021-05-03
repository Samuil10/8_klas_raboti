#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
srand(time(0));
int num = rand() % 3;
int a;
cout<<"scissor (0), rock (1), paper (2):";
cin>>a;
cout<<"The computer is ";
if (num==0) cout<<"scissor";
if (num==1) cout<<"rock";
if (num==2) cout<<"paper";
cout<<" .";
cout<<"You are ";
if (a==0) cout<<"scissor";
if (a==1) cout<<"rock";
if (a==2) cout<<"paper";
if (a==num) cout<<" too";
cout<<" .";
if (num==0){
    if (a==1){
        cout<<" You won!";
    }
        if (a==2){
        cout<<" You lost!";
    }
        if (a==0){
        cout<<" It is a draw!";
    }


}

if (num==1){
    if (a==2){
        cout<<" You won!";
    }
        if (a==0){
        cout<<" You lost!";
    }
        if (a==1){
        cout<<" It is a draw!";
    }


}
if (num==2){
    if (a==0){
        cout<<" You won!";
    }
        if (a==1){
        cout<<" You lost!";
    }
        if (a==2){
        cout<<" It is a draw!";
    }


}
return 0;
}
