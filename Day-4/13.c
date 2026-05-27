// Fibonacci Series
#include <stdio.h>
int main(){
    int a=0,b=1,next,n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}