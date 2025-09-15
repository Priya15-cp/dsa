#include<stdio.h>

int oddEven( int a){
    if(a&1){
        printf("odd");
    }
    else{
        printf("even");
    }

}

int main(){
    int a;
    printf("enter the value of a");
    scanf("%d",&a);

oddEven(a);
}