#include<stdio.h>

int factorial( int n){

    int fact = 1;

    for(int i; i<=n ;i++){
        fact = fact * i;
    
    }
     return fact;
}
int nCr(int n, int r){

    int num= factorial(n);

    int denom = factorial(r) * factorial(n-r);

    int ans = ( num/ denom);

    return ans;
 }
int main(){
    int n,r;
    printf("enter the value of n,r");
    scanf("%d %d",&n,&r);

    int ans = nCr(n,r);
    printf("%d",ans);
    return ans;
}
