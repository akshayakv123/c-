#include<iostream>
using namespace std;

int findgreatest(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
int main(){
    int num1,num2;
    cout<<"enter the two numbers:";
    cin>>num1>>num2;
    int greatest=findgreatest(num1,num2);
    cout<<"greatest number is:"<<greatest;
    return 0;
}
