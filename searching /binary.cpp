#include<iostream>
using namespace std;

int main(){
    int arr[5]={4,5,6,7,8};
    int key=5;
    int start=0;
    int end=4;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<"element is present";
            return mid;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }


    }

}