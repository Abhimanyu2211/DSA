#include<iostream>
using namespace std;
int main(){
    int arr[10];

    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<10;i++){
        arr[i]=arr[i-2]+arr[i-1];
    }
    cout<<"fibonacci series is";
    for(int i=0;i<10;i++){
        cout<<endl<<arr[i]<<endl;

    }
} 