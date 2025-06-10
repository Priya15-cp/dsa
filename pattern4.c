#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);

    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            printf("%d",count);
            count++;
            j++;
        }
        printf("\n");
        i++;

    }
}
    
    