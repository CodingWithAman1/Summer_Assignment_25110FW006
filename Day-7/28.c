// Write a program to Recursive sum of digits.
#include <stdio.h>
int sOd(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sOd(n / 10);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is %d", n, sOd(n));
    return 0;
}