#include<iostream>
using namespace std;

int main(){
    int arr[]={34,8,9,56,2,1};
    int n =6;

    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;
        for( j=i-1 ;j>=0 && arr[j]>temp ;j--){
           
            arr[j+1]=arr[j];
                
        }
        arr[j+1] = temp;
    }

    
    
    for(int i =0;i<n;i++){
        cout << arr[i]<< " ";

    }


    return 0;
}
