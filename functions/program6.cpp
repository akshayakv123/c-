//average value for a list of numbers using array and function
#include<iostream>
using namespace std;

float findAverage(int arr[],int n){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return(float)sum/n;

}
int main(){
    int n;

    cout<<"enter number if elements:";
    cin>>n;
    int arr[n];

    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float average=findAverage(arr,n);

    cout<<"Average value is:"<<average;

    return 0;
}
