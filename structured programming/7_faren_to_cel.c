#include <stdio.h>
int main(){
    float t;
    scanf("%f",&t);
    float c = (t-32)*5/9;
    printf("Celsius temp is : %.2f", c);
    return 0;
}