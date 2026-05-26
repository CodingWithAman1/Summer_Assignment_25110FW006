//Write a program to Print multiplication table of a given number.
#include <stdio.h>
void multiplication_table(int n);
int main(){
    int n;
    printf("Enter the number to print the table for");
    scanf("%d",&n);
    multiplication_table(n);
    return 0;
}
void multiplication_table(int n){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d \n",n,i,n*i);
    }
}