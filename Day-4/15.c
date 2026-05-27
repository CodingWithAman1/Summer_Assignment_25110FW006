// Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int n,temp,r,len=0,arm=0;
    printf("Enter the number to check:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        temp=temp/10;
        len++;
    }
    temp=n;
    while(temp!=0){
        r=temp%10;
        arm=arm+(int)round(pow(r, len));
        temp=temp/10;
    }
    if (arm==n){
        printf("%d is an Armstrong number\n",n);
    } else {
        printf("%d is not an Armstrong number\n",n);
    }
    return 0;
}