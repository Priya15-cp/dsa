#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for (int i=0;i<=n;i++){
        cout<< arr[i] <<" ";
    } cout<<endl;
}

void altreverse( int arr[] , int n){
    for(int i =0; i<(n-1); i=i+2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    
    altreverse(arr,5);
    printarray(arr,5);
    return 0;
}
