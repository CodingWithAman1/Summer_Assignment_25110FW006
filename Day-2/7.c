//Write a program to Find product of digits.
#include <stdio.h>
int product_of_digits(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Product of digits in %d : %d",n,product_of_digits(n));
    return 0;
}
int product_of_digits(int n){
    int pro=1,r;
    while(n!=0){
        r=n%10;
        pro=pro*r;
        n=n/10;
    }
    return pro;
}