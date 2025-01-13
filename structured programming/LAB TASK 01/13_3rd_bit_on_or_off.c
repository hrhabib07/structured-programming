#include <stdio.h>
int main(){
    int number; // Input number
    printf("Enter an integer: ");
    scanf("%d", &number);

    int mask = 4;
    if (number & mask) {
        printf("The third bit is set.\n");
    } else {
        printf("The third bit is not set.\n");
    }
    return 0;
}