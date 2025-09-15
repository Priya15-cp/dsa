#include<iostream>
using namespace std;

int main(){
    int arr[]={5,7,81,24,65,4,5};
    int n=7;
    
    for(int i=0;i<(n-1);i++){
        bool swapee=false;
        for(int j=0;j=(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapee = true;
            }
        }
        if(swapee == false){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}