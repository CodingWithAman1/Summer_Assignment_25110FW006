// Write a program to Check whether a number is palindrome.
#include <stdio.h>
int rev_number(int n);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n==rev_number(n)){
        printf("%d is a pallindrome",n);
    } else {
        printf("Not a pallindrome");
    }
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