//Write a program to Reverse a number. 
#include <stdio.h>
int rev_number(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Reverse of %d : %d",n,rev_number(n));
    return 0;
}
int rev_number(int n){
    int rev=0,r;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}