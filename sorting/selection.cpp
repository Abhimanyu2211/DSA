#include<iostream>
using namespace std;
int main(){
    int arr[10]={9,8,76,53,23,46,34,65,32,0};
    cout<<"enter array elememt";  
    
    int index;
    int n=10;
    int min=arr[0];
    for(int i=0; i<n-1;i++){
       index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]>arr[j]){
                index=j;
            }
            
        }
        swap(arr[index],arr[i]);

    }
     for(int i=0;i<10;i++){
        cout<<"array "<<i<<" element is"<<arr[i]<<endl;

    }
}