#include<stdio.h>
int linear(int arr[],int n,int key){
    for(int i=0;i<=n;i++){
        if (arr[i]==key){
            printf("key is found\n");
        }
        
    }
    
    return 1;
        
}

int main(){
    int arr[7]={4,6,8,1,78,9};
    int key;
    printf("enter the key");
    scanf("%d",&key);

    linear(arr,7,key);
}