#include <stdio.h>
int main(){
    float l,w;
    scanf("%f %f",&l,&w);
    float perimeter = 2*(l+w);
    float area = l*w;
    printf("Peri: %.2f \nArea: %.2f",perimeter,area);
    return 0;
}