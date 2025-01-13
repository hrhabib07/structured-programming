#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4, e = 2;
    float res1 = ((a + b) * c) - (d / (float)e); 
    printf("%.2f", res1);
    return 0;
}
