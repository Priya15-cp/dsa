#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,3,7,6,5};

    int n=7;
    for(int i=0;i<(n-1);i++){
        int minindex = i;
        for(int j=(i+1);j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
        
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
        }
    cout << endl;
    return 0;
}