//Write a program to Count digits in a number.
#include <stdio.h>
int count_digit(int n);
int main(){
    int n;
    printf("Enter the number to find digits of:");
    scanf("%d",&n);
    printf("Number of digits in %d : %d",n,count_digit(n));
    return 0;
}
int count_digit(int n){
    int len=0;
    while(n!=0){
        n=n/10;
        len++;
    }
    return len;
}