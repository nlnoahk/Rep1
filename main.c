#include <stdio.h>

int main(){
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x) ;
    y = x*x +2*x;
    printf("y: %f/n", y);
    return 0;
}

