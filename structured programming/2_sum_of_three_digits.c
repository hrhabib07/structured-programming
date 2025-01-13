#include <stdio.h>
int main(){
    int n;
    printf("Enter your three digit number: ");
    scanf("%d", &n);
    int first_digit = n%10;
    int second_digit = (n/10)%10;
    int third_digit = n/100;
    int sum = first_digit+second_digit+third_digit;
    printf("Sum of your given three digits : %d",sum);
    return 0;
}