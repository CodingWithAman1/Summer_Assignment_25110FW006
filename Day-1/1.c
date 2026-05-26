//Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>
int sum_Natural_numbers(int n);
int main(){
    int n;
    printf("Enter the number of natural nnumbers");
    scanf("%d",&n);
    printf("sum=%d",sum_Natural_numbers(n));
    return 0;
}
int sum_Natural_numbers(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}