#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,4,3,0,1,3};
    int n=6;
    for(int i=n-2;i>=0;i--){
        int swaped=0;
        for(int j=0; j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=1;
            }
        }
        if(swaped==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}