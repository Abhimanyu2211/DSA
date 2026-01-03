#include<iostream>
using namespace std;
int main(){
int arr[ ]={4,5,2,4,8};
int n=5;
int min=arr[0];
int index;
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
        index=i;
        }
    }
for(int i=index; i<n-1; i++){
    arr[i]=arr[i+1];
}
n--;
for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
int max= arr[0];
int maxindex;
for(int i=0; i<n; i++){
    if(arr[i]>max){
        max=arr[i];
        maxindex=i;
    }
}
cout<<endl<<max<<endl<<maxindex<<endl;
int max2= arr[0];
for(int i=0; i<n; i++){
    if(i==maxindex){
        continue;
    }
    if(arr[i]>max2){
        max2=arr[i];
    }

}
cout<<"2nd maximum no. is: "<<max2;
return 0;
}
