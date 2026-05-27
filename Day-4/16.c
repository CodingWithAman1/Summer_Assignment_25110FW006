// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main(){
    int ll,ul;
    printf("Enter the limits:");
    scanf("%d %d",&ll,&ul);
    for (int i=ll;i<=ul;i++){
    int temp,r,len=0,arm=0,n=i;
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
        printf("%d ",n);
    } 
    }
    return 0;

}