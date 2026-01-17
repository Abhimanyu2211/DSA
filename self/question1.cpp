#include<iostream>
using namespace std;
int main(){
    int arr[2000];
    int n;

    int target;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++ ){
        cout<<"enter "<<i<<" element of array "<<endl;
        cin>>arr[i];
    }
    cout<<"enter target"<<endl;
    cin>>target;

    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"the correct postion is "<<i;
            break;

        }
        else if(arr[i]>target){
            cout<<"the position is "<<i;
            break;
        }
    }
}