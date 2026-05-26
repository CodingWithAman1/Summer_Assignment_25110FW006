//Write a program to Find sum of digits of a number.
#include <stdio.h>
int sum_digit(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Sum of digits in %d : %d",n,sum_digit(n));
    return 0;
}
int sum_digit(int n){
    int sum=0,r;
    while(n!=0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}