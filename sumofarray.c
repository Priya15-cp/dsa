#include<stdio.h>

int main()
{
    int sum=0;
    int arr[5]={1,4,5,2,3};
    int aarray=sizeof(arr)/sizeof(int);
    // printf("%d",aarray);
      for( int i=0;i<=(aarray-1);i++){
         sum=sum+arr[i];
        
     }
      printf("%d",sum);

}