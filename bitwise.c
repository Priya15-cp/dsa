#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a ,b ");
    scanf("%d %d",&a,&b);

    printf("and operation %d\n",a&b);
    printf("or operation %d\n",a|b);
    printf("not operation %d\n",~b);
    printf("xor operation %d\n",a^b);
    printf("left shift operation %d\n",a<<1);
    printf("right shift operation %d\n",a>>1);
    
    
}