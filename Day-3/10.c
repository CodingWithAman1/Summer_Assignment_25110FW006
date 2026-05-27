// Write a program to Print prime numbers in a range.
#include <stdio.h>
void print_prime(int n);
int main(){
    int n;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    print_prime(n);
    return 0;
}
void print_prime(int n){
    for (int i=2;i<=n;i++){
        int flag=0;
        for (int j=1;j<=i;j++){
            if(i%j==0){
                flag++;
            }
        }
        if (flag==2){
            printf("%d\t",i);
        }
    }
    printf("\n");
}